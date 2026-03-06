// EJERCICIO #2
/* Sistema de acceso con intentos limitados
Crear un sistema de acceso que:
1. Solicite usuario y contraseña
2. Permita máximo 3 intentos
3. Muestre intentos restantes
4. Bloquee acceso al fallar
5. Permita reintentar si es correcto
Usuario correcto: admin Clave correcta: 1234*/
#include <iostream> // Usamos la libreria estándar para entrada y salida
#include <string> // Usamos la libreria para manejar cadenas de texto

using namespace std;

int main (){ 
    string usuario; // Variable que almacenará el usuario ingresado
    string clave; // Variable que almacenará la contraseña a ingresar
    int intentos = 3; // Establecemos el número máximo de intentos permitidos
    bool acceso = false; // Usamos un booleano para indicar si el acceso fue correcto o no
    
    // Usamos un ciclo do-while para repetir los intentos mientras aún tenga disponibles

    do {
        cout << "Ingresa el Usuario: "; // Pedimos el usuario
        cin >> usuario; // Usamos cin para capturar el usuario ingresado
        cout << "Ingresa la Clave: "; // Pedimos la clave
        cin >> clave; // Usamos cin para capturar la clave ingresada

        //Ahora usamos un condicional para verificar si el usuario y la clave son correctas
        if (usuario == "admin" && clave == "1234") {
            acceso = true; // Marcamos el acceso como veradero
            cout << "Acceso concedido. Bienvenid@!"<< endl;
            break;
        } else {
            intentos--; // Restamos un intento
            cout << "Acceso denegado. Intentos restantes: "<< intentos <<endl;
        } 

        // Usamos switch para mostrar los mensajes según los intentos que queden
        switch (intentos) {
            case 2:
            cout << "Advertencia. Solo quedan 2 intentos." << endl;
            break;
            case 1:
            cout << "Advertencia. Solo queda 1 intento." << endl;
            break;
            case 0:
            cout << "Advertencia. No quedan más intentos. El acceso ha sido bloqueado." << endl;
            break;
            default:
            break;
        }
    } while (!acceso && intentos > 0); // Esto se repetirá mientras no haya acceso y queden intentos
    return 0;
}
