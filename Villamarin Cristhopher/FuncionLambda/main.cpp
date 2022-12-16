#include <iostream>

int main()
{
    int pelotas{ 10 };

    auto remover{
        // Añadimos a la definición de la lambda "mutable" después de paréntesis parámetros.
        [pelotas]() mutable {
            // Ahora ya podemos modificar pelotas (pero modificará el clon, no aceptará al original)
            --pelotas;

            std::cout << "Pelota escogida, quedan " << pelotas << " pelotas en la caja.\n";
          }
    };

    remover();
    remover();

    std::cout << "Quedan " << pelotas << " pelotas en la caja\n";

    return 0;
}