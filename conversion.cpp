#include <iostream>

class Converter {
public:
    double kilometersToMeters(double kilometers) {
        return kilometers * 1000; // 1 kilometer = 1000 meters
    }
};

int main() {
    double inputKilometers;
    std::cout << "Enter distance in kilometers: ";
    std::cin >> inputKilometers;

    Converter conv; // Create an instance of the Converter class
    double resultMeters = conv.kilometersToMeters(inputKilometers);

    std::cout << inputKilometers << " kilometers is equal to " << resultMeters << " meters." << std::endl;

    return 0;
}
