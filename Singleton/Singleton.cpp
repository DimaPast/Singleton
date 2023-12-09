#include <iostream>

class Singleton {
private:
   
    Singleton() {}

   
    static Singleton* instance;

public:
   
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }


    void showMessage() const {
        std::cout << "Hello from Singleton!\n";
    }
};


Singleton* Singleton::instance = nullptr;

int main() {

    Singleton* singletonInstance = Singleton::getInstance();


    singletonInstance->showMessage();




    Singleton* anotherInstance = Singleton::getInstance();

 
    anotherInstance->showMessage();

    return 0;
}
