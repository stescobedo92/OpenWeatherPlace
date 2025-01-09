#include "EnvLoader.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <unordered_map>

EnvLoader::EnvLoader(const std::string& file_path) : file_path_(file_path) {}

std::unordered_map<std::string, std::string> EnvLoader::load() const {
    std::unordered_map<std::string, std::string> env_vars;
    std::ifstream file(file_path_);
    if (!file.is_open()) {
        throw std::runtime_error("Error opening .env file");
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string key, value;
        if (std::getline(iss, key, '=') && std::getline(iss, value)) {
            env_vars[key] = value;
        }
    }

    return env_vars;
}
