#include <iostream>

int main()
{
    int valor1{9};
    int valor2;
    //std::cout << "Digite el primer valor a comparar: ";
    //std::cin >> valor1;
    std::cout << "Digite el valor a comparar: ";
    std::cin >> valor2;

    //Funcion lambda
    auto comparar{
        [&valor1,valor2](){
            ++valor1;
            if(valor1==valor2){
                std::cout << "\nLos valores son iguales";
            }else{
                 std::cout << "\nLos valores son distintos";
            }

        }
    };

    comparar();

    return 0;
}

