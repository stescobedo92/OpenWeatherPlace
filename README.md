# OpenWeatherPlace 🌤️☁️☀️

Welcome to **OpenWeatherPlace**! This application allows you to get the current weather for any city using the [OpenWeatherMap](https://openweathermap.org/api) API. This project is written in C++ and leverages modern libraries for integration with external APIs.

## Features 🚀

- **Weather Query:** Get detailed information about the current weather for any city.
- **API Integration:** Connects to the OpenWeatherMap API for accurate and up-to-date data.
- **Secure Configuration:** Uses a `.env` file to securely manage environment variables like the API key.
- **Error Handling:** Implements validations and error handling for a robust experience.

## Requirements 🛠️

- CMake for project setup.
- External libraries:
  - `cpr` for HTTP requests.
  - `nlohmann/json` for JSON handling.

## Installation 📥

1. Clone this repository:
```bash
git clone https://github.com/your-username/WeatherApp.git
cd WeatherApp
```
2. Install dependencies:
```bash
vcpkg install cpr nlohmann-json
```
3. Create a `.env` file in the executable folder with your OpenWeatherMap API key:
```bash
API_KEY=YOUR_API_KEY
```
4. Configure and build the project with CMake:
```bash
mkdir build
cd build
cmake ..
make
```

## Usage 👩‍💻

To run the application, use the following command in the terminal:
```bash
./weather

Name of the city: Tokyo

The weather in Tokyo is: clear sky
Temperature: 15.6°C
```

## Contributions 🙌

Contributions are welcome! If you have any improvements or find any issues, please open an issue or submit a pull request.

## License 📄

This project is licensed under the MIT License. See the LICENSE file for details.
