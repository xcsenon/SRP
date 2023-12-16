#include <iostream>
#include <string>


class BadExample {
public:

    void readData() {
        std::cout << "Enter data: ";
        std::cin >> data;
    }

    void processData() {
        
        data += " Processed";

        
        std::cout << "Processed data: " << data << std::endl;
    }

private:
    std::string data;
};


class GoodExample {
public:
    
    void readData() {
        std::cout << "Enter data: ";
        std::cin >> data;
    }

    
    void processData() {
        
        data += " Processed";
    }

    
    void printData() {
        std::cout << "Processed data: " << data << std::endl;
    }

private:
    std::string data;
};

int main() {
    
    BadExample badObj;
    badObj.readData();
    badObj.processData();

    
    GoodExample goodObj;
    goodObj.readData();
    goodObj.processData();
    goodObj.printData();

    return 0;
}
