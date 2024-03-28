/*Questão 1:
a) A programação orientada a objetos (POO) é uma forma de programação que organiza o código em torno de objetos, que podem conter dados na forma de campos, também conhecido como atributos, e código na forma de procedimentos, também conhecidos como métodos. Permitindo assim, modelar coisas do mundo real de forma mais clara.

ex. de POO:*/

#include <iostream>
using namespace std;

class Carro 
{
public:
    string marca;
    string modelo;

    void dirigir() {
        cout << marca << " " << modelo << " está em movimento." << endl;
    }
};

/*b) Uma classe é um modelo que define a estrutura e o comportamento de um objeto. Uma classe pode conter atributos (variáveis) e métodos (funções). 

ex. de classe:*/
// Definição da classe Carro em C++
class Carro {
public:
    string marca;
    string modelo;

    void dirigir() {
        cout << marca << " " << modelo << " está em movimento." << endl;
    }
};

/*c) Uma instância é um objeto específico criado a partir de uma classe. É a realização do conceito definido pela classe. Cada instância possui seus própios valores para os atributos da classe e pode chamar os métodos definidos na classe.

ex. de instância:
*/
// Criação de uma instância da classe Carro em C++
Carro meu_carro;
meu_carro.marca = "Toyota";
meu_carro.modelo = "Corolla";

/*d) Um objeto é uma instância concreta de uma classe. Em POO, os objetos são as entidades fundamentais que interagem entre si através de troca de mensagens. Ele possui um estado (representado pelos valores de seus atributos) e comportamento (definido pelos métodos da classe).

ex. de objeto:
 'meu_carro' é um objeto criado a partir da classe Carro*/

 
