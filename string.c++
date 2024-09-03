#include <iostream>
#include <string>

std::string stringinvertida(std::string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    return str;
}

int main() {
    std::string str;
    std::cout << "Informe a string: ";
    std::cin >> str;

    std::string strInvertida = stringinvertida(str);
    std::cout << "String invertida: " << strInvertida << std::endl;
    printf("FiM");

    return 0;
}
