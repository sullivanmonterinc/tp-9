#include <iostream>
#include <string>

using namespace std;

// Estructura para almacenar los datos del alumno
struct Alumno {
    string nombre;
    string apellido;
    string curso;
    string materia;
    float nota1, nota2, nota3;
};

// Funci�n para inicializar y solicitar los datos del alumno
void inicializar(Alumno &alumno) {
    cout << "Ingrese el nombre del alumno: ";
    getline(cin, alumno.nombre);
    
    cout << "Ingrese el apellido del alumno: ";
    getline(cin, alumno.apellido);
    
    cout << "Ingrese el curso del alumno: ";
    getline(cin, alumno.curso);
    
    cout << "Ingrese la materia: ";
    getline(cin, alumno.materia);
    
    cout << "Ingrese la calificaci�n del primer trimestre: ";
    cin >> alumno.nota1;
    
    cout << "Ingrese la calificaci�n del segundo trimestre: ";
    cin >> alumno.nota2;
    
    cout << "Ingrese la calificaci�n del tercer trimestre: ";
    cin >> alumno.nota3;
    
    cin.ignore(); // Limpiar el buffer de entrada
}

// Funci�n para calcular el promedio de las tres notas
float calcularPromedio(Alumno alumno) {
    return (alumno.nota1 + alumno.nota2 + alumno.nota3) / 3;
}

// Funci�n para calcular la condici�n (aprobado o reprobado)
string calcularCondicion(float promedio) {
    if (promedio >= 6) {
        return "Aprobado";
    } else {
        return "Reprobado";
    }
}

// Funci�n principal
int main() {
    Alumno alumno;
    
    inicializar(alumno);
    
    float promedio = calcularPromedio(alumno);
    string condicion = calcularCondicion(promedio);
    
    cout << "\nAlumno: " << alumno.nombre << " " << alumno.apellido << endl;
    cout << "Curso: " << alumno.curso << endl;
    cout << "Materia: " << alumno.materia << endl;
    cout << "Promedio final: " << promedio << endl;
    cout << "Condici�n: " << condicion << endl;
    
    return 0;
}

