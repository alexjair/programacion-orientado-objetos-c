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
        cls_persona &met_cambiar_nombre(string vNombre){
            this->nombre = vNombre;
            return *this;
        }

        cls_persona &met_cambiar_edad(int vEdad){
            this->edad = vEdad;
            return *this;
        }

        void met_saludar(){
            cout << "Mi Nombre es: " << nombre << endl;
            cout << "Mi edad es: " << edad << endl;
        }
};

int main() {

    cls_persona *per2 = new cls_persona("Laura Sanguinetti",36);

    //Llamada al destructor() ~
    //delete per2;

    //Ejemplo de Puntero - concatenado
    per2->met_cambiar_nombre("Ximena").met_cambiar_edad(26).met_cambiar_nombre("Luz");
    per2->met_saludar(); cout << endl;
}