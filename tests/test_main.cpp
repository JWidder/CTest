#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(2, 3);

    if (result != 5)
    {
        std::cerr << "Test fehlgeschlagen: add(2,3) sollte 5 ergeben, ist aber "
                  << result << std::endl;
        return 1; // Fehlercode → CTest markiert Test als FAILED
    }

    std::cout << "Test erfolgreich!" << std::endl;
    return 0; // Erfolg → CTest markiert Test als PASSED
}
