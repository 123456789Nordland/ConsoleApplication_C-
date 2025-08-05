// ConsoleApplication_C++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "UartDriver.h"

using namespace std;
// 94
class Apple {
    public:

     static int count; // static variable, die gemeinsam für alle Objekte ist.
     void foo(int val) {
         count = val;
        cout << "hi" << endl;
        count++;
        cout << count << endl;
    }



};
int Apple::count;       // !!! man muss unbedingt eine static Variable definieren!!! 

int main()
{
   // 94 Статические методы класса зачем нужны.Модификатор static.Как влияет.ООП.Для начинающих.Урок #94
   Apple app;    // zugriff auf einer static Variable, direkt aus einer Klasse! 
   app.foo(5);
   Apple::count++;
   
   return 0;
}


