#include <iostream>
#include <string>

using namespace std;

class cls_animal {

    protected:
        //atributos
        static int numero_animales;
        string alimento;
    
    public:
        //atributos
        
        //costructor
        cls_animal();

        //destructor
        ~cls_animal();

        //metodos
        
        static int met_obtener_numero_animales();

        string met_obtener_alimento() {
            return alimento;
        }
        
        void met_comer() {
            cout << "Este animal está comiendo " << alimento << "... ñom ñom" << endl;
        }
};

int cls_animal::numero_animales = 0;

cls_animal::cls_animal() {
    cout << "Creando nuevo animal..." << endl;
    numero_animales += 1;
}

cls_animal::~cls_animal() {
    cout << "Borrando animal..." << endl;
    numero_animales -= 1;
}

int cls_animal::met_obtener_numero_animales() {
    return numero_animales;
}


/*****[ CLASES HEREDADAS ]*******/

// CLASE #2
class cls_herviboro : public cls_animal {
    public:
        //constructor
        cls_herviboro() : cls_animal() {
            this->alimento = "plantas";
        }

        //metodo
        void met_pastar() {
            cout << "Este animal está pastando..." << endl;
        }
};

// CLASE #3
class cls_carnivoro : public cls_animal {
    public:
        //constructor
        cls_carnivoro() : cls_animal() {
            this->alimento = "carne";
        }
        
        //metodo
        void met_cazar() {
            cout << "Este animal está cazando..." << endl;
        }
};

int main() {
    cls_animal *a = new cls_animal();
    cls_herviboro *h = new cls_herviboro();
    cls_carnivoro *c = new cls_carnivoro();

    cout << "Numero de animales " << cls_animal::met_obtener_numero_animales() << endl;
    
    a->met_comer();    
    h->met_pastar();
    c->met_cazar();
    
    delete a;
    
    cout << "Numero de animales " << cls_animal::met_obtener_numero_animales() << endl;    
}