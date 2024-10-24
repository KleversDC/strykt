#include <iostream>
using namespace std;

//struct ComplexNumber {
//    double real;
//    double imaginary;
//
//    ComplexNumber Add(const ComplexNumber& other) const {
//        ComplexNumber result;
//        result.real = real + other.real;
//        result.imaginary = imaginary + other.imaginary;
//        return result;
//    }
//    ComplexNumber Subtract(const ComplexNumber& other) const {
//        ComplexNumber result;
//        result.real = real - other.real;
//        result.imaginary = imaginary - other.imaginary;
//        return result;
//    }
//    ComplexNumber Multiply(const ComplexNumber& other) const {
//        ComplexNumber result;
//        result.real = real * other.real - imaginary * other.imaginary;
//        result.imaginary = real * other.imaginary + imaginary * other.real;
//        return result;
//    }
//    ComplexNumber Divide(const ComplexNumber& other) const {
//        ComplexNumber result;
//        double denominator = other.real * other.real + other.imaginary * other.imaginary;
//        if (denominator == 0) {
//            cout << "Cannot divide by zero!" << endl;
//            return result;
//        }
//        result.real = (real * other.real + imaginary * other.imaginary) / denominator;
//        result.imaginary = (imaginary * other.real - real * other.imaginary) / denominator;
//        return result;
//    }
//    void Display() const {
//        if (imaginary >= 0) {
//            cout << real << " + " << imaginary << "i" << endl;
//        }
//        else {
//            cout << real << " - " << -imaginary << "i" << endl;
//        }
//    }
//};
//
//int main() {
//    ComplexNumber num1 = { 3, 4 };
//    ComplexNumber num2 = { 1, 2 };
//
//    ComplexNumber sum = num1.Add(num2);
//    ComplexNumber difference = num1.Subtract(num2);
//    ComplexNumber product = num1.Multiply(num2);
//    ComplexNumber quotient = num1.Divide(num2);
//
//    cout << "Sum: ";
//    sum.Display();
//
//    cout << "Difference: ";
//    difference.Display();
//
//    cout << "Product: ";
//    product.Display();
//
//    cout << "Quotient: ";
//    quotient.Display();
//}








struct Car {
    double length;
    double clearance;
    double engineVolume;
    int enginePower;
    double wheelDiameter;
    char color[50];
    char transmission[50];

    void CopyString(char* destination, const char* source) {
        int i = 0;
        while (source[i] != '\0') {
            destination[i] = source[i];
            i++;
        }
        destination[i] = '\0';
    }

    void SetValues(double len, double clr, double engVol, int engPow, double wheelDia, const char* clrStr, const char* transStr) {
        length = len;
        clearance = clr;
        engineVolume = engVol;
        enginePower = engPow;
        wheelDiameter = wheelDia;
        CopyString(color, clrStr);
        CopyString(transmission, transStr);
    }

    void Display() const {
        cout << "Length: " << length << " m" << endl;
        cout << "Clearance: " << clearance << " m" << endl;
        cout << "Engine Volume: " << engineVolume << " L" << endl;
        cout << "Engine Power: " << enginePower << " hp" << endl;
        cout << "Wheel Diameter: " << wheelDiameter << " inches" << endl;
        cout << "Color: " << color << endl;
        cout << "Transmission: " << transmission << endl;
    }

    bool SearchByColor(const char* clr) const {
        int i = 0;
        while (color[i] != '\0' && clr[i] != '\0') {
            if (color[i] != clr[i]) return false;
            i++;
        }
        return color[i] == '\0' && clr[i] == '\0';
    }

    bool SearchByTransmission(const char* trans) const {
        int i = 0;
        while (transmission[i] != '\0' && trans[i] != '\0') {
            if (transmission[i] != trans[i]) return false;
            i++;
        }
        return transmission[i] == '\0' && trans[i] == '\0';
    }
};

int main() {
    Car car1;
    car1.SetValues(4.5, 0.2, 2.0, 150, 18.0, "Red", "Automatic");

    cout << "Car 1 Details: " << endl;
    car1.Display();

}




