#pragma once

#ifndef ENVLOADER_H
#define ENVLOADER_H

#include <string>
#include <unordered_map>

/**
 * @class EnvLoader
 * @brief Clase para cargar variables de entorno desde un archivo .env.
 */
class EnvLoader {
public:
    /**
     * @brief Constructor.
     * @param file_path Ruta al archivo .env.
     */
    EnvLoader(const std::string& file_path);

    /**
     * @brief Carga las variables de entorno desde el archivo .env.
     * @return Mapa de variables de entorno.
     */
    std::unordered_map<std::string, std::string> load() const;

private:
    std::string file_path_;
};

#endif //ENVLOADER_H
