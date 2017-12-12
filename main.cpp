#include "concordance.h"


int main()
{
   Concordance con("alice.txt");
   con.parse();   
   con.print();

   return 0;
}
