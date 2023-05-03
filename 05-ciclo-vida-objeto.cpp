#include<iostream>
#include<string>

using namespace std;

class cls_persona {
    public: 
        
        //Propiedades
        string nombre;
        int edad;

        //Constructor        
        cls_persona(
            string vNombre,
            int vEdad
        ){
            nombre = vNombre;
            edad = vEdad;
        }

        //Destructor
        ~cls_persona(){
            cout << "Destructor" <<endl;
        }

        //Metodos
        void fun_saludar(){
            cout << "Mi edad es: " << edad;
        }
};

int main() {

    cls_persona per = cls_persona("Jair Rojas",38);

    cout << "Mi nombre es:" << per.nombre << endl;
    per.fun_saludar(); cout << endl;


    cls_persona *per2 = new cls_persona("Laura Sanguinetti",36);

    //Llamada al destructor() ~
    delete per2;
    
    cout << "Mi nombre es:" << per2->nombre << endl;
    per2->fun_saludar(); cout << endl;
}