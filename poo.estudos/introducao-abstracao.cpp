/*
Estudos de programa��o orientada a objetos (POO) - Seguindo roteiro do Judson Santiago 
*/

//obs.:

/*
Abordagem estruturada = struct
Abordagem orientada a objetos = class

struct ==> por padr�o, possui visibilidade p�blica
class ==> por padr�o, possui visibilidade privada
*/

//ex. struct:

/*#include <iostream>
using namespace std;
struct Jogo
{
	string nome; // nome do jogo
	float preco; // pre�o do jogo
	int horas; // quantidade de horas jogadas
	float custo; // valor por hora jogada
};

	Jogo adquirir(const string & titulo, float valor);
	void atualizar(Jogo & jogo, float valor);
	void jogar(Jogo & jogo, int tempo);
	void exibir(const Jogo & jogo);*/ 

//struct e class s�o sempre antes da fun��o main

//ex. class:

/*
#include <iostream>

// Defini��o da classe Circle
class Circle {
private:
    double radius;

public:
    // Construtor
    Circle(double r) {
        radius = r;
    }

    // M�todo para obter a �rea do c�rculo
    double getArea() {
        return 3.14159 * radius * radius;
    }

    // M�todo para obter o per�metro do c�rculo
    double getPerimeter() {
        return 2 * 3.14159 * radius;
    }

    // M�todo para definir o raio do c�rculo
    void setRadius(double r) {
        radius = r;
    }

    // M�todo para obter o raio do c�rculo
    double getRadius() {
        return radius;
    }
};

int main() {
    // Criando uma inst�ncia da classe Circle
    Circle circle1(5.0);

    // Obtendo e imprimindo a �rea e o per�metro do c�rculo
    std::cout << "�rea do c�rculo: " << circle1.getArea() << std::endl;
    std::cout << "Per�metro do c�rculo: " << circle1.getPerimeter() << std::endl;

    // Alterando o raio do c�rculo
    circle1.setRadius(7.0);

    // Obtendo e imprimindo o novo raio do c�rculo
    std::cout << "Novo raio do c�rculo: " << circle1.getRadius() << std::endl;

    return 0;
}
*/

//ex.2 de class(mais simples):
/*
#include <iostream>

// Defini��o da classe Car
class Car {
public:
    // Membro de dados da classe
    std::string brand;

    // M�todo da classe para imprimir a marca do carro
    void printBrand() {
        std::cout << "Marca do carro: " << brand << std::endl;
    }
};

int main() {
    // Criando uma inst�ncia da classe Car
    Car myCar;

    // Atribuindo um valor ao membro de dados 'brand'
    myCar.brand = "Toyota";

    // Chamando o m�todo da classe para imprimir a marca do carro
    myCar.printBrand();

    return 0;
}
*/

//Uma classe representa v�rios objetos. Abstra��o � uma SIMPLIFICA��O das coisas no mundo real
//Classes e objetos abstraem o mundo real

