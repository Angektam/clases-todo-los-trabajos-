#include <iostream> // para std :: cout

// definicion dela funcion definida por el usuario doPrint ()
void doPrint() //doPrint () es la funcion llamada en este ejemplo
{
    std :: cout << "en doPrint () \ n";
}

// definicion de la funcion main ()
int main()
{
    std :: cout << "iniciando main () \ n";
     doPrint ();//interrumpe main () haciendo una llamada de funcion a doPrint (). main () es la persona que llama.
    std :: cout << "finalizando main () \ n"; //esta sentencia se ejecuta despues que termine doPrint
    return 0;
}
