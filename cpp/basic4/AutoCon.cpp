#include <iostream> //Working of Implicit type-conversion
#include <typeinfo>
using namespace std;

int main() {

   int num_int;
   double num_double = 9.99;
/*  */
   // implicit conversion
   // assigning a double value to an int variable
   // num_int = num_double;
   num_double = (double)num_int;

   cout << "num_int = " << num_int << " " << typeid(num_int).name() << endl;
   cout << "num_double = " << num_double << " " << typeid(num_double).name() << endl;

   return 0;
}