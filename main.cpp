#include <iostream>
#include "WeatherClient.h"
#include "EnvLoader.h"

int main() {
    try {
        EnvLoader env_loader(".env");
        auto env_vars = env_loader.load();
        std::string api_key = env_vars["API_KEY"];

        if (api_key.empty()) {
            std::cerr << "API_KEY is not set in the .env file" << std::endl;
            return 1;
        }

        std::string location;
        std::cout << "Name of the city: ";
        std::getline(std::cin, location);

        WeatherClient client(api_key);
        std::string weather_info = client.getWeather(location);
        std::cout << weather_info << std::endl;

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}