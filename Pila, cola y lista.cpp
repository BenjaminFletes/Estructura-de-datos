#include <iostream>
#include <queue>

using namespace std;

class PilaConCola {
private:
    queue<int> cola1;
    queue<int> cola2;

public:
    void push(int elemento) {
        cola1.push(elemento);
    }

    int pop() {
        if (cola1.empty()) {
            cout << "La pila esta vacia." << endl;
            return -1;
        }

        while (cola1.size() > 1) {
            cola2.push(cola1.front());
            cola1.pop();
        }

        int elemento = cola1.front();
        cola1.pop();

        // Intercambiar los nombres de las colas
        swap(cola1, cola2);

        return elemento;
    }

    int peek() {
        if (cola1.empty()) {
            cout << "La pila esta vacia." << endl;
            return -1;
        }

        while (cola1.size() > 1) {
            cola2.push(cola1.front());
            cola1.pop();
        }

        int elemento = cola1.front();

        // Intercambiar los nombres de las colas
        swap(cola1, cola2);

        return elemento;
    }

    bool estaVacia() {
        return cola1.empty();
    }
};

int main() {
    PilaConCola pila;
    pila.push(1);
    pila.push(2);
    pila.push(3);

    cout << "Elemento en la cima de la pila: " << pila.peek() << endl;  // Salida: 3
    cout << "Sacando de la pila: " << pila.pop() << endl;  // Salida: 3
    cout << "Elemento en la cima de la pila: " << pila.peek() << endl;  // Salida: 2

    return 0;
}
