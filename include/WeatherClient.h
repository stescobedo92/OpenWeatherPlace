#pragma once

#ifndef WEATHERCLIENT_H
#define WEATHERCLIENT_H

#include <string>

/**
 * @class WeatherClient
 * @brief Class to get weather data using the OpenWeatherMap API.
 */
class WeatherClient {
public:
    /**
     * @brief Constructor.
     * @param api_key OpenWeatherMap API key.
     */
    explicit WeatherClient(const std::string& api_key);

    /**
    * @brief Gets the weather for a given location.
    * @param location Name of the city.
    * @return Weather information as a string.
     */
    std::string getWeather(const std::string& location);

private:
    std::string api_key_;

    /**
    * @brief Encodes a string so that it is valid in a URL.
    * @param value String to encode.
    * @return Encoded string.
     */
    std::string url_encode(const std::string &value);
};

#endif //WEATHERCLIENT_H
