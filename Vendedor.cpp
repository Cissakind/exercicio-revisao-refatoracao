#include "Vendedor.hpp"
#include "Engenheiro.hpp"

Vendedor::Vendedor(double _salarioHora, std::string _nome, double _quotaMensalVendas, double _horasTrabalhadas): 
				   Empregado(_salarioHora, _nome, _horasTrabalhadas), quotaMensalVendas(_quotaMensalVendas){};

double Vendedor::quotaTotalAnual() const {
	int numMeses = 12;
	return quotaMensalVendas * numMeses;
}

std::ostream & operator << (std::ostream &out, const Vendedor &vend) {
	return out	<< "Nome: " << vend.nome << std::endl
	<< "Salario Mes: " << vend.pagamentoMes(vend._horasTrabalhadas) << std::endl
	<< "Quota vendas: " << vend.quotaTotalAnual() << std::endl
	<< std::endl;
}