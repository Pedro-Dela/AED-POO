/*
Estudos de programação orientada a objetos (POO) - Seguindo roteiro do Judson Santiago 
*/

//obs.:

/*
Abordagem estruturada = struct
Abordagem orientada a objetos = class

struct ==> por padrão, possui visibilidade pública
class ==> por padrão, possui visibilidade privada
*/

//ex. struct:

/*#include <iostream>
using namespace std;
struct Jogo
{
	string nome; // nome do jogo
	float preco; // preço do jogo
	int horas; // quantidade de horas jogadas
	float custo; // valor por hora jogada
};

	Jogo adquirir(const string & titulo, float valor);
	void atualizar(Jogo & jogo, float valor);
	void jogar(Jogo & jogo, int tempo);
	void exibir(const Jogo & jogo);*/ 

//struct e class são sempre antes da função main

//ex. class:

/*
#include <iostream>

// Definição da classe Circle
class Circle {
private:
    double radius;

public:
    // Construtor
    Circle(double r) {
        radius = r;
    }

    // Método para obter a área do círculo
    double getArea() {
        return 3.14159 * radius * radius;
    }

    // Método para obter o perímetro do círculo
    double getPerimeter() {
        return 2 * 3.14159 * radius;
    }

    // Método para definir o raio do círculo
    void setRadius(double r) {
        radius = r;
    }

    // Método para obter o raio do círculo
    double getRadius() {
        return radius;
    }
};

int main() {
    // Criando uma instância da classe Circle
    Circle circle1(5.0);

    // Obtendo e imprimindo a área e o perímetro do círculo
    std::cout << "Área do círculo: " << circle1.getArea() << std::endl;
    std::cout << "Perímetro do círculo: " << circle1.getPerimeter() << std::endl;

    // Alterando o raio do círculo
    circle1.setRadius(7.0);

    // Obtendo e imprimindo o novo raio do círculo
    std::cout << "Novo raio do círculo: " << circle1.getRadius() << std::endl;

    return 0;
}
*/

//ex.2 de class(mais simples):
/*
#include <iostream>

// Definição da classe Car
class Car {
public:
    // Membro de dados da classe
    std::string brand;

    // Método da classe para imprimir a marca do carro
    void printBrand() {
        std::cout << "Marca do carro: " << brand << std::endl;
    }
};

int main() {
    // Criando uma instância da classe Car
    Car myCar;

    // Atribuindo um valor ao membro de dados 'brand'
    myCar.brand = "Toyota";

    // Chamando o método da classe para imprimir a marca do carro
    myCar.printBrand();

    return 0;
}
*/

//Uma classe representa vários objetos. Abstração é uma SIMPLIFICAÇÃO das coisas no mundo real
//Classes e objetos abstraem o mundo real

