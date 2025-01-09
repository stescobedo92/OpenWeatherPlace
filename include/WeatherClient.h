#pragma once

#ifndef WEATHERCLIENT_H
#define WEATHERCLIENT_H

#include <string>

/**
 * @class WeatherClient
 * @brief Clase para obtener datos del clima usando la API de OpenWeatherMap.
 */
class WeatherClient {
public:
    /**
     * @brief Constructor.
     * @param api_key Clave de la API de OpenWeatherMap.
     */
    WeatherClient(const std::string& api_key);

    /**
     * @brief Obtiene el clima para una ubicación dada.
     * @param location Nombre de la ciudad.
     * @return Información del clima como una cadena.
     */
    std::string getWeather(const std::string& location);

private:
    std::string api_key_;

    /**
     * @brief Codifica una cadena para que sea válida en una URL.
     * @param value Cadena a codificar.
     * @return Cadena codificada.
     */
    std::string url_encode(const std::string &value);
};

#endif //WEATHERCLIENT_H
