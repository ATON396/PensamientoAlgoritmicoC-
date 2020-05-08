
#include <iostream>

using namespace std;

// Constantes
const int n = 5;
const int m = 4;

// Estructura
struct Estado {
    string palabra;
    string verificacion;
    int posiciones[n];
    int veces;
};

// Prototipo de funciones
int verificarPalabras(string palabras[], string diccionario[], Estado estados[]);

int main() {
    string palabras[n] = {"En", "Casa", "De", "Lalo", "Casa"};
    string diccionario[m] = {"En", "Casa", "Lalo", "Los"};
    Estado estados[n];
    Estado estadoActual;
    int cantEstados = verificarPalabras(palabras, diccionario, estados);
    for (int i = 0; i < cantEstados; i++) {
        estadoActual = estados[i];
        cout << "Palabra: " << estadoActual.palabra << endl;
        cout << "Verificacion: " << estadoActual.verificacion << endl;
        cout << "Posiciones: " << endl;
        for (int j = 0; j < estadoActual.veces; j++) {
            cout << estadoActual.posiciones[j] << " ";
        }
        cout << endl;
        cout << "-----------------------------------" << endl;
    }
}

int buscarEstado(string palabra, Estado estados[]) {
    for (int i = 0; i < n; i++) {
        if (palabra == estados[i].palabra) {
            return i;
        }
    }
    return -1;
}

bool buscarDiccionario(string palabra, string diccionario[]) {
    for (int i = 0; i < m; i++) {
        if (palabra == diccionario[i]) {
            return true;
        }
    }
    return false;
}

int verificarPalabras(string palabras[], string diccionario[], Estado estados[]) {
    int posEstado;
    bool esta;
    int cantEstados = 0;
    int veces;
    // Para cada palabras en palabras
    for (int i = 0; i < n; i++) {
        posEstado = buscarEstado(palabras[i], estados);
        // Ya existe registro de la palabra
        if (posEstado != -1) {
            // estados[posEstado]
            veces = estados[posEstado].veces;
            estados[posEstado].posiciones[veces] = i;
            estados[posEstado].veces += 1;
        }
        // Si no, lo crea (registro de la palabra)
        else {
            Estado estado;
            // Guarda la palabra en el el estado
            estado.palabra = palabras[i];
            esta = buscarDiccionario(palabras[i], diccionario);
            // Si la palabra esta en el diccionario
            if (esta == true) {
                estado.verificacion = "ESTA";
                estado.posiciones[0] = i;
                estado.veces = 1;
            }
            // Si no esta
            else {
                estado.verificacion = "NOESTA";
                estado.posiciones[0] = -1;
                estado.veces = 1;
            }
            // Agregar el estado, al arreglo de estados
            estados[cantEstados] = estado;
            cantEstados++;
        }
    }
    return cantEstados;
}
