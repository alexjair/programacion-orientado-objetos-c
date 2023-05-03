#include<iostream>
#include<string>

using namespace std;

class cls_persona {
    private:
        //propiedades
        string nombre;
        int edad;

    public: 
        //Propiedades
        
        //Constructor        
        cls_persona(
            string vNombre,
            int vEdad
        ){
            this->nombre = vNombre;
            this->edad = vEdad;
        }

        //Destructor
        ~cls_persona(){
            cout << "Destructor" <<endl;
        }

        //Metodos
        void met_cambiar_nombre(string vNombre){
            this->nombre = vNombre;
        }

        void met_cambiar_edad(int vEdad){
            this->edad = vEdad;
        }

        void met_saludar(){
            cout << "Mi Nombre es: " << nombre << endl;
            cout << "Mi edad es: " << edad << endl;
        }
};

int main() {

    cls_persona per = cls_persona("Jair Rojas",38);

    per.met_cambiar_edad(18);
    per.met_cambiar_nombre("Alexander Jair Rojas Paria");
    per.met_saludar(); cout << endl;


    cls_persona *per2 = new cls_persona("Laura Sanguinetti",36);

    //Llamada al destructor() ~
    //delete per2;
    per2->met_cambiar_edad(18);
    per2->met_cambiar_nombre("July Sanguinetti Bardales");
    per2->met_saludar(); cout << endl;
}