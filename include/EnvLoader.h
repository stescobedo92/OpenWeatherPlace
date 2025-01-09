#pragma once

#ifndef ENVLOADER_H
#define ENVLOADER_H

#include <string>
#include <unordered_map>

/**
 * @class EnvLoader
 * @brief Class to load environment variables from a .env file.
 */
class EnvLoader {
public:
    /**
     * @brief Constructor.
     * @param file_path Path to the .env file.
     */
    explicit EnvLoader(const std::string& file_path);

    /**
    * @brief Loads environment variables from the .env file.
    * @return Map of environment variables.
     */
    [[nodiscard]] std::unordered_map<std::string, std::string> load() const;

private:
    std::string file_path_;
};

#endif //ENVLOADER_H
