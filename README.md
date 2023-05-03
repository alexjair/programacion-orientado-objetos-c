# <h1>Programación Orientado Objetos C++ </h1>
💎 Ejemplos de **C++** de implemencion de **POO** instancias objetos a través de clases, punteros para referenciar objetos, manejo de memoria.

- **Email**: alexjair@gmail.com <br>
- **Autor**: Alexander Jair Rojas Paria

<img src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEjomI-kKS3JER3E_AQXhd8a_MKFVW6CgWR6i2Nt0Kuq3SwiyBYe8DirlsU48IGEoducVh00Dbx2L3CCHUqkVOW9k4SjiutgUWKPou4S_yCsZ04PXoVilMNtD1299X_aava8zwXAXhOlzZthW36MsXaftu0Q1HHQk7TN2cZBf5y0QO3226ULsLuaPq5v/s1600/carbon.png">


# 🙂 Programación POO


# **Usando punteros**


![alt_text](images/image4.png "image_tooltip")


**#include &lt;iostream>**

**using namespace std;**

int main() {

  char character = 'A';

  char *pointer = &character;

  cout &lt;< (int *)&character &lt;< endl;

  cout &lt;< (int *)pointer &lt;< endl;

  cout &lt;< *pointer &lt;< endl;

}


![alt_text](images/image5.png "image_tooltip")



# **Estructuras de datos**


![alt_text](images/image6.png "image_tooltip")



![alt_text](images/image7.png "image_tooltip")



![alt_text](images/image8.png "image_tooltip")


**#include &lt;iostream>**

**#include &lt;string>**

**using namespace std;**

**struct struc_persona**

{

    string nombre;

    int edad;

};

**int main(){**

  **  //Declaracion v.1**

    struc_persona **p **= **struc_persona();**

    **p**.nombre = "Jair";

    **p**.edad = 38;

    cout&lt;< "El nombre es:" &lt;< **p**.nombre &lt;< endl;

    cout&lt;< "La edad es:" &lt;<** p**.edad &lt;< endl;

   ** //Declaracion v.2 con punteros**

    struc_persona ***per** = **new struc_persona();**

   

    **per**->nombre = "Jair";

    **per**->edad = 38;

    cout&lt;< "El nombre es:" &lt;<** per**->nombre &lt;< endl;

    cout&lt;< "La edad es:" &lt;< **per**->edad &lt;< endl;

**}**


![alt_text](images/image9.png "image_tooltip")



# **Uniones y enumeraciones**

**#include &lt;iostream>**

**#include &lt;string>**

**using namespace std;**

**int main() {**

  **union **number_letter {

    int number;

    char letter;

  };

  number_letter **x** = {'a'};

  number_letter **y** = {9};

  cout &lt;< **x**.letter &lt;< endl;

  cout &lt;< **y**.number &lt;< endl;

}

//Enumerations:

**#include &lt;iostream>**

**#include &lt;string>**

**using namespace std;**

**int main() {**

  **enum **days_of_week { monday = 'M', tuesday = 'T', friday = 'F' };

  days_of_week **day **= monday;

  cout &lt;< **day **<&lt; endl;

}


# **POO Intro**


## **¿Qué es POO?**

Las clases tienen: \
- **Atributos **= características inherentes (tamaño, nombre, color) \
- **Métodos **= verbos (correr, saltar, dormir, etc)

Conceptos de los objetos: \
- **Abstracción **= forma de ver a los objetos(o forma de pensar), en la cual definimos sus atributos y métodos dependiendo del contexto. \
- **Encapsulamiento **= centrar o agrupar en una unidad. Se puede ocultar características al exterior. Ejem: Un coche se puede encapsular por sus acciones(acelerar, girar, etc.) pero se privatiza conceptos no relevantes para el usuario (cantidad de combustible a inyectar al motor, viscosidad del aceite, etc )


```
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
```



## **Ciclo de vida de un Objeto**


![alt_text](images/image10.png "image_tooltip")



```
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
```



# **Encapsulación**


```
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
```



# **This ( this->{--attribute--} )**


```
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
```



# **static Poo**


```
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
        static int num_personas;

        //Constructor        
        cls_persona(
            string vNombre,
            int vEdad
        );

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

        void met_saludar();
};

//Llamadas Externa
int cls_persona::num_personas = 0;

cls_persona::cls_persona(
        string vNombre,
        int vEdad
    ){
        this->nombre = vNombre;
        this->edad = vEdad;
        num_personas += 1;
    }

void cls_persona::met_saludar(){
    cout << "Mi Nombre es: " << nombre << endl;
    cout << "Mi edad es: " << edad << endl;
}

/*********************[ main ]**********************/

int main() {

    cls_persona per = cls_persona("Alexander Jair",36);
    per.met_saludar(); cout << endl;

    cls_persona *per2 = new cls_persona("Laura Sanguinetti",36);



    //Llamada al destructor() ~
    //delete per2;

    //Ejemplo de Puntero - concatenado
    per2->met_cambiar_nombre("Ximena").met_cambiar_edad(26).met_cambiar_nombre("Luz");
    per2->met_saludar(); cout << endl;

    cout << "El numero de personas:" << cls_persona::num_personas << endl;
}
```



# **Herencia**


```
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
        cls_animal(


        );

        //destructor
        ~cls_animal();

        //metodos


        static int met_obtener_numero_animales();

        string met_obtener_alimento(string vAlimento) {
            alimento = vAlimento;
            return alimento;
        }


        void met_comer() {
            cout << "Este animal está comiendo " << alimento << "... ñom ñom" << endl;
        }
};

int cls_animal::numero_animales = 0;

cls_animal::cls_animal(


) {
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
            cout << "Este animal está pastando..." << alimento << endl;
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
            cout << "Este animal está cazando..." << alimento << endl;
        }
};

int main() {
    cls_animal *a = new cls_animal();
    cls_herviboro *h = new cls_herviboro();
    cls_carnivoro *c = new cls_carnivoro();

    cout << "Numero de animales " << cls_animal::met_obtener_numero_animales() << endl;


    a->met_obtener_alimento("de todo");    
    a->met_comer();    
    h->met_obtener_alimento("Flores");
    h->met_pastar();
    c->met_obtener_alimento("Leche");
    c->met_cazar();


    delete a;


    cout << "Numero de animales " << cls_animal::met_obtener_numero_animales() << endl;    
}
```



# **Herencia Múltiple**


![alt_text](images/image11.png "image_tooltip")



![alt_text](images/image12.png "image_tooltip")

