#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro eng1(35, "Joao Snow", 3, 9.5);
  std::cout << eng1;
  
  Engenheiro eng2(30, "Daniela Targaryen", 1, 8.);
  std::cout << eng2;

  Engenheiro eng3(30, "Bruno Stark", 2, 8.);
  std::cout << eng3;
  
  Vendedor vend1(20, "Tonho Lannister", 5000, 6.);
  std::cout << vend1;
  
  Vendedor vend2(25, "Jose Mormont", 3000, 8.);
  std::cout << vend2;

  Vendedor vend3(30, "Sonia Stark", 4000, 8.);
  std::cout << vend3;
  
  return 0;	
}