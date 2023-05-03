#include <iostream>
#include <string>

using namespace std;

struct struc_persona
{
    string nombre;
    int edad;
};

int main(){

    //Declaracion v.1
    struc_persona p = struc_persona(); 

    p.nombre = "Jair";
    p.edad = 38;

    cout<< "El nombre es:" << p.nombre << endl;
    cout<< "La edad es:" << p.edad << endl;

    //Declaracion v.2 con punteros
    struc_persona *per = new struc_persona(); 
    
    per->nombre = "Jair";
    per->edad = 38;

    cout<< "El nombre es:" << per->nombre << endl;
    cout<< "La edad es:" << per->edad << endl;


}

