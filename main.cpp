#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class product { 
public:
    string Product_Classification; 
    string The_Product;
    int price_product;
    int ID_product;
    string payment_method;
    string name_product; 

    void value() {
        cout << "Price Product : $" << price_product << endl;
        cout << "The Product : " << The_Product << endl;
        cout << "Product Classification : " << Product_Classification << endl;
        cout << "Name : " << name_product << endl;
        cout << "---------------------------" << endl;
    } 
};

void casher() {
    time_t now = time(0);   
    char* time_date = ctime(&now);

    string choice_cilent;
    string choice_pm;

    cout << "\n=== CASHIER SYSTEM ===" << endl;
    cout << "Enter product choice (ram / gpu / keyboard): ";
    cin >> choice_cilent;

    cout << "Enter payment method (paypal / mcard / cash / vcash): ";
    cin >> choice_pm;

   
    if (choice_cilent == "ram" || choice_cilent == "RAM") {
        product ram;
        ram.Product_Classification = "RAM 32 GB DDR5";
        ram.The_Product = "Random Access Memory"; 
        ram.price_product = 100; 
        ram.ID_product = 95627456;
        ram.name_product = "RAM";

        double tax = ram.price_product * 0.14;

        cout << "\n-----------------------------------------" << endl;
        cout << "| THE PRICE RAM IS      : $" << ram.price_product << endl;
        cout << "| The TAX Equal (14%)   : $" << tax << endl;
        cout << "| Date/Time             : " << time_date;
        cout << "-----------------------------------------" << endl;
        cout << "| Product ID            : #" << ram.ID_product << endl;
        cout << "| Payment Method        : " << choice_pm << endl;
        cout << "| TOTAL                 : $" << ram.price_product + tax << endl;
        cout << "-----------------------------------------" << endl;
    }
    else if (choice_cilent == "gpu" || choice_cilent == "GPU") {
        product gpu;
        gpu.Product_Classification = "RTX2060 Nvidia (12GB DDR6)";
        gpu.The_Product = "Graphics Processing Unit";
        gpu.price_product = 200;
        gpu.ID_product = 104646389;
        gpu.name_product = "GPU";

        double tax = gpu.price_product * 0.12; 

        cout << "\n-----------------------------------------" << endl;
        cout << "| THE PRICE GPU IS      : $" << gpu.price_product << endl;
        cout << "| The TAX Equal (12%)   : $" << tax << endl;
        cout << "| Date/Time             : " << time_date;
        cout << "-----------------------------------------" << endl;
        cout << "| Product ID            : #" << gpu.ID_product << endl;
        cout << "| Payment Method        : " << choice_pm << endl;
        cout << "| TOTAL                 : $" << gpu.price_product + tax << endl;
        cout << "-----------------------------------------" << endl;
    }
 
    else if (choice_cilent == "keyboard" || choice_cilent == "KEYBOARD") {
        product keyboard;
        keyboard.Product_Classification = "Keyboard Mechanical RGB";
        keyboard.The_Product = "Mechanical Keyboard Bluetooth RGB";
        keyboard.price_product = 180;
        keyboard.ID_product = 28712376;
        keyboard.name_product = "Keyboard";

        double tax = keyboard.price_product * 0.16; 

        cout << "\n-----------------------------------------" << endl;
        cout << "| THE PRICE KEYBOARD IS : $" << keyboard.price_product << endl;
        cout << "| The TAX Equal (16%)   : $" << tax << endl;
        cout << "| Date/Time             : " << time_date;
        cout << "-----------------------------------------" << endl;
        cout << "| Product ID            : #" << keyboard.ID_product << endl;
        cout << "| Payment Method        : " << choice_pm << endl;
        cout << "| TOTAL                 : $" << keyboard.price_product + tax << endl;
        cout << "-----------------------------------------" << endl;
    }
    else {
        cout << "\n[!] Invalid Choice! Product not found." << endl;
    }
}

int main() {  
    casher();
    return 0;
}
