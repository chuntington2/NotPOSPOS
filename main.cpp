#include <iostream>
#include "item.h"

//the user's actions
int main()
{
  std::cout<<"======================\n"
           <<"Welcome to Not POS POS\n"
           <<"======================\n";
  item newItem;
  std::cout<<newItem.getName()<<std::endl;
  std::cout<<newItem.getPrice()<<std::endl;
  std::cout<<newItem.getSKU()<<std::endl;
  return 0;
}
