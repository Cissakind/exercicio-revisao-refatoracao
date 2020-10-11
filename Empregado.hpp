#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

protected:

    double salarioHora;  
    std::string nome;
    double _horasTrabalhadas;

public:

	Empregado(double _salarioHora, std::string _nome, double _horasTrabalhadas = 8.);
	double pagamentoMes(double horasTrabalhadas) const;
};

#endif