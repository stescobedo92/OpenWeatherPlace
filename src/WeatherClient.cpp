#include "WeatherClient.h"
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <iostream>
#include <stdexcept>

WeatherClient::WeatherClient(const std::string& api_key) : api_key_(api_key) {}

std::string WeatherClient::getWeather(const std::string& location) {
    if (location.empty()) {
        throw std::invalid_argument("La ubicación no puede estar vacía");
    }

    std::string encoded_location = url_encode(location);
    std::string url = "http://api.openweathermap.org/data/2.5/weather?q=" + encoded_location + "&appid=" + api_key_;

    auto response = cpr::Get(cpr::Url{url});

    if (response.status_code != 200) {
        throw std::runtime_error("Error al obtener datos del clima: " + std::to_string(response.status_code));
    }

    auto weather_data = nlohmann::json::parse(response.text);
    std::string weather = weather_data["weather"][0]["description"];
    double temperature = double(weather_data["main"]["temp"]) - 273.15; // Convertir de Kelvin a Celsius

    return "El clima en " + location + " es: " + weather + "\nTemperatura: " + std::to_string(temperature) + "°C";
}

std::string WeatherClient::url_encode(const std::string &value) {
    std::string encoded;
    char hex[4];
    for (unsigned char c : value) {
        if (isalnum(c) || c == '-' || c == '_' || c == '.' || c == '~') {
            encoded += c;
        } else {
            snprintf(hex, sizeof(hex), "%%%02X", c);
            encoded += hex;
        }
    }
    return encoded;
}
