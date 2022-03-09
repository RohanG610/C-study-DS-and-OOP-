#include<iostream>
using namespace std;
/*
The try statement allows you to define a block of code to be tested for errors while it is executed.
The throw keyword throws an exception when a problem is detected(also lets us create a custom error).
The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.
*/
int main()
{
   int x = -1;
   cout << "Before try \n";
   try {
      cout << "Inside try \n";
      if (x < 0)
      {
         throw x;
         cout << "After throw (Never executed) \n";
      }
   }
   catch (int x ) {
      cout << "Exception Caught \n";
   }
 
   cout << "After catch (Will be executed) \n";
   return 0;
}
