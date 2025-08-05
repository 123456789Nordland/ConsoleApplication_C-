// ConsoleApplication_C++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "UartDriver.h"

using namespace std;
// 94
class Apple {
    public:

        static int GetCount() {
            cout << count << endl;              // Zugriff auf die statische Variable
			return count;                           
           
        }
        static void SetCount(int& val) {

            count = val;                           // Zugriff auf die statische Variable
            
        }

     
     void foo() {         
        cout << "hi" << endl;       
        cout << count << endl;
    }
private:
    static int count;


};
int Apple::count = 0;       // !!! man muss unbedingt eine static Variable definieren!!! f

int main()
{
   // 94 Статические методы класса зачем нужны.Модификатор static.Как влияет.ООП.Для начинающих.Урок #94
   Apple app;    // zugriff auf einer static Variable, direkt aus einer Klasse! 

   int val = 16;


   Apple::SetCount(val);
   Apple::GetCount();


  // app.foo(); 
   
   return 0;
}


