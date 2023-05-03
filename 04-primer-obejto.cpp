#include<iostream>
#include<string>

using namespace std;

class cls_persona {
    public: 
        
        //Propiedades
        string nombre;
        int edad = 38;
        
        //Metodos
        void fun_saludar(){
            cout << "Mi edad es: " << edad;
        }
};

int main() {

    cls_persona per = cls_persona();

    per.nombre = "Jair";

    cout << "Mi nombre es:" << per.nombre << endl;
    per.fun_saludar(); cout << endl;


    cls_persona *per2 = new cls_persona();

    per2->nombre = "Laura";

    cout << "Mi nombre es:" << per2->nombre << endl;
}