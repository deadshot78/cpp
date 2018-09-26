#include <iostream>
#include "lib.h"
#include "ecole.h"

int main (void)
{
      calcul* calcul1= new calcul();
      std::cout<< calcul1->somme(9,5)<< std::endl;
      calcul* calcul2= new calcul();
      std::cout<< calcul2->multiplication(9,6)<< std::endl;
      calcul* calcul3= new calcul();
      std::cout<< calcul3->division(9,7)<< std::endl;




 return 0;
}
