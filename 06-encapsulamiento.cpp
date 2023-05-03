#include<iostream>
#include<string>

using namespace std;

class cls_persona {
    private:
        //Propiedades
        string clave;
        int id;

    public: 
        //Propiedades
        string nombre;
        int edad;

        //Constructor        
        cls_persona(
            string vNombre,
            int vEdad,
            int vId
        ): 
            clave("EDS$#$.*#$ETERT"),
            id(vId)
        {
            nombre = vNombre;
            edad = vEdad;
        }

        //Destructor
        ~cls_persona(){
            cout << "Destructor" <<endl;
        }

        //Metodos
        void fun_saludar(){
            cout << "Mi edad es: " << edad << endl;
            cout << "Mi ID es: " << id << endl;
            cout << "Mi Clave es: " << clave << endl;
        }
};

int main() {

    cls_persona per = cls_persona("Jair Rojas",38,172058);

    cout << "Mi nombre es:" << per.nombre << endl;
    per.fun_saludar(); cout << endl;


    cls_persona *per2 = new cls_persona("Laura Skarlet",36,22541);

    //Llamada al destructor() ~
    //delete per2;
    
    cout << "Mi nombre es:" << per2->nombre << endl;
    per2->fun_saludar(); cout << endl;
}