#include <iostream>
int req;
int number;

int main() {
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите сумму : \n";
    std::cin >> req;
    if (req > 150000) {
        std::cout << " Банкомат не может выдать сумму более 150000 ";
    }
    else {
        if (req >= 5000 && req <= 150000) {
            std::cout << "5000 :" << req / 5000 << "\n";
            req %= 5000;
        }
        if (req >= 2000) {
            std::cout << "2000 :" << req / 2000 << "\n";
            req %= 2000;
        }
        if (req >= 1000) {
            std::cout << "1000 :" << req / 1000 << "\n";
            req %= 1000;
        }
        if (req >= 500) {
            std::cout << "500 :" << req / 500 << "\n";
            req %= 500;
        }
        if (req >= 200) {
            std::cout << "200 :" << req / 200 << "\n";
            req %= 200;
        }
        if (req >= 100) {
            std::cout << "100 :" << req / 100 << "\n";
        }
    }
}