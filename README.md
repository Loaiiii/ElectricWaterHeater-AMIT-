# Electric Water Heater Controller

## Overview

This project implements a controller for an Electric Water Heater. The controller is designed to manage the heating and cooling elements, temperature settings, and display relevant information using a seven-segment display. The code is written in C for an AVR microcontroller and uses the AVR-GCC toolchain. Additionally, a Proteus simulation is included to visualize and test the hardware setup.

## Features

- **Temperature Setting**: Allows users to set a desired temperature.
- **Temperature Sensing**: Reads the current water temperature.
- **Heating/Cooling Control**: Activates heating or cooling elements to maintain the desired temperature.
- **Display**: Shows current temperature and status on a seven-segment display.
- **LED Indicators**: Uses LEDs to indicate the status of the heating elements.

## Project Structure

### Header Files

- `ADC.h`: Contains declarations for ADC initialization and reading functions.
- `Buttons.h`: Contains declarations for button initialization and reading functions.
- `EEPROM.h`: Contains declarations for EEPROM read/write functions.
- `Heat_Cool_Element.h`: Contains declarations for controlling the heating and cooling elements.
- `LED.h`: Contains declarations for LED control functions.
- `SevenSeg.h`: Contains declarations for seven-segment display functions.
- `std_macros.h`: Contains common macros used throughout the project.
- `System.h`: Contains declarations for system initialization and control functions.
- `sys_config.h`: Contains configuration settings and definitions.
- `timers.h`: Contains declarations for timer initialization and interrupt handling functions.

### Source Files

- `ADC.c`: Implements ADC initialization and reading functions.
- `Buttons.c`: Implements button initialization and reading functions.
- `EEPROM.c`: Implements EEPROM read/write functions.
- `Heat_Cool_Element.c`: Implements control functions for heating and cooling elements.
- `LED.c`: Implements LED control functions.
- `SevenSeg.c`: Implements functions for controlling the seven-segment display.
- `main.c`: Contains the main function and overall program logic.
- `System.c`: Implements system initialization and control functions.
- `timers.c`: Implements timer initialization and interrupt handling functions.

### Simulation Files

- `Electric_Water_Heater.pdsprj`: Proteus project file for the Electric Water Heater simulation.
- `Electric_Water_Heater.pdsprj.bak`: Backup of the Proteus project file.

## Setup and Usage

### Prerequisites

- AVR-GCC Toolchain
- AVR Programming Tool (e.g., AVRISP mkII)
- Eclipse IDE (optional)
- Proteus Design Suite

### Compilation and Upload

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/electric-water-heater-controller.git
    ```
2. Navigate to the project directory:
    ```sh
    cd electric-water-heater-controller
    ```
3. Compile the code using `make`:
    ```sh
    make all
    ```
4. Upload the compiled code to the AVR microcontroller:
    ```sh
    make program
    ```

### Simulation

1. Open the Proteus Design Suite.
2. Open the `Electric_Water_Heater.pdsprj` file located in the project directory.
3. Run the simulation to visualize and test the water heater controller's functionality.

## Usage

1. Power on the water heater controller.
2. Set the desired temperature using the provided buttons.
3. The current temperature and status will be displayed on the seven-segment display.
4. LEDs will indicate whether the heating elements are active or inactive.

## License

This project is licensed under the Eclipse License.

## Contributing

Contributions are welcome! Please open an issue or submit a pull request.

## Authors

- **Mloai** - Initial work

## Acknowledgments

- Giza Systems for the internship opportunity and support.
- AVR-GCC community for the tools and resources.
- Labcenter Electronics for the Proteus Design Suite.
