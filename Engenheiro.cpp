#include "Engenheiro.hpp"

Engenheiro::Engenheiro(double _salarioHora, std::string _nome, int _projetos, double _horasTrabalhadas): 
			Empregado(_salarioHora, _nome, _horasTrabalhadas), projetos(_projetos){};

std::ostream & operator << (std::ostream &out, const Engenheiro &eng) {
	return out	<< "Nome: " << eng.nome << std::endl
	<< "Salario Mes: " << eng.pagamentoMes(eng._horasTrabalhadas) << std::endl
	<< "Projetos: " << eng.projetos << std::endl
	<< std::endl;
}