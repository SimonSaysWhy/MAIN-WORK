#include <iostream>

int main() {
    bool PizzaWithPepperoni = true;
    bool PizzaWithoutPepperoni = false;

    std::cout << "I like pizza with pepperoni " << PizzaWithPepperoni << std::endl;
    std::cout << "I like pizza without pepperoni " << PizzaWithoutPepperoni << std::endl;

    if (PizzaWithPepperoni && PizzaWithoutPepperoni) {
        std::cout << "Pizza with pepperoni is way better than without ";
    }
    if (PizzaWithPepperoni || PizzaWithoutPepperoni) {
        std::cout << "Pizza with pepperoni is better" << std::endl;

    }
    return 0;

}