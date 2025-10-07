// ConsoleApplication_C++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
#include "can.h"
#include <array>
#include <cstdint>

using namespace std;




template <typename T1, typename T2>
T1 Sum(T1 a, T2 b) {
    return a + b;
}

template <class T>
T Out(T a) {
    return a;
}



// Pointers!!!!!
void Outp(int* px) {

    (*px) += 10;

}
// 57
void FillArray(int* const arr, const int size) // um den Zeiger falsch nicht zu überschreiben
// void FillArray(int* const arr, const int size) -- und so ist es auch möglich, in diesem Fall können wir nicht Pufferelemente  ändern. 
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }

}
void ShowArray(const int* const arr, const int size)    // um Pufferelemente vom Write zu schutzen

{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

}
// 65
void Foo1() {
    cout << "void Foo1()" << endl;

}
void Foo2() {
    cout << "void Foo2()" << endl;

}
string GetDataFromBD()
{
    return "Data From BD";

}

string GetDataFromWS()
{
    return "Data From WS";

}

void ShowInfo(string(*fooPointer)()) {
    cout << fooPointer() << endl;
}
// 75
class Point75
{
public:
    int x;
    int y;

    void Print() {
        cout << x << endl;
        cout << c << endl;
    }
    void SetValc(int val) {
        this->c = val;
    }
private:
    int z;
protected:
    int c;

};

class Point76 {
private:
    int x;
    int y;

public:

    int GetX() { return x; }
    void SetX(int x) { this->x = x; }


};
class CoffeGrinder {
private:

    bool CheckVoltage()
    {
        return false;
    }
public:
    void Start()
    {
        CheckVoltage() ? cout << "run" << endl : cout << "not good" << endl;
    }


};
//78
class Point78 {
private:
    int x;
    int y;
    int* data;


public:
    Point78(int x, int y) {
        this->x = x;
        this->y = y;
        cout << this << "  Konstruktor" << endl;
    }
    Point78() {
        this->x = 0;
        this->y = 0;
        cout << this << "  Konstruktor" << endl;

    }
    Point78(int size)
    {
        this->x = 0;
        this->y = 0;

        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = i;
        }
        cout << "Klassekonstruktor ist Da" << endl;
        cout << *(data + 2) << endl;
    }
    // Lesson 80
    ~Point78() {
        delete[] data;
        cout << "KlasseDekonstruktor ist Da" << endl;
        cout << *(data + 2) << endl;
    }


    void Print() {
        cout << x << endl;
        cout << y << endl;
    }
};
// 82
class MyClass82 {
public:
    int* data;
    int size;


    MyClass82(int size) {
        this->size = size;
        this->data = new int[size];

        cout << "KlasseKonstruktor ist Da  " << this << endl;
    }

    ~MyClass82() {

        cout << "KlasseDekonstruktor ist Da  " << this << endl;
    }

    MyClass82(const MyClass82& other)
    {
        // this->data = other.data;    // dafault Kopie-Konstruktor
        this->data = new int[other.size];

        cout << "KopierenKonstruktor wir aufgerufen  " << this << endl;

    }


};

void Foo(MyClass82 value) {
    cout << "Funktion Foo wird aufgerufen " << endl;
}

MyClass82 Foo82() {
    cout << "Funktion Foo82 wird aufgerufen " << endl;
    MyClass82 temp(2);
    return temp;
}


class MyClass83 {
public:
    int* data;
    int size;


    MyClass83(int size) {
        this->size = size;
        this->data = new int[size];

        cout << "KlasseKonstruktor ist Da  " << this << endl;
    }

    MyClass83& operator = (const MyClass83& other)
    {
        cout << "Operator = " << this << endl;

        this->size = other.size;

        if (this->data != nullptr)
        {
            this->data = new int[other.size];
        }

        this->data = new int[other.size];

        for (int i = 0; i < other.size; i++)
        {
            this->data[i] = other.data[i];
        }

        return *this;

    }

    ~MyClass83() {

        cout << "KlasseDekonstruktor ist Da  " << this << endl;
    }

    MyClass83(const MyClass82& other)
    {
        this->data = other.data;    // dafault Kopie-Konstruktor



        cout << "KopierenKonstruktor wir aufgerufen  " << this << endl;

    }


};
class Point88
{
private:
    int x;
    int y;
public:
    // Friendly Funktion
    friend void changeX(Point88& value);
    // Konstruktor
    Point88() {
        this->x = 1;
        this->y = 2;
        cout << this->x << endl;
        cout << this->y << endl;
    }

    void Print88() {
        cout << this->x << endl;
        cout << this->y << endl;
    }

};

void changeX(Point88& value)
{
    value.x = -1;
    value.y = -7;
};

class MyClass89
{
public:
    MyClass89();
    ~MyClass89();
    void PrintMessage89();

private:

};

MyClass89::MyClass89()
{
}

MyClass89::~MyClass89()
{
}

void MyClass89::PrintMessage89()        // zu wem diese Funktion gehört ::
{
    cout << "Message " << endl;
}

class Apple;
class Human;
class Human
{
public:
    void TakeApple(Apple& app);

    void EatApple(Apple& app);
private:

};
/*
class Apple {

    friend Human;

public:

    static int count;
    Apple(int weight, string color)
    {
        this->weight = weight;
        this->color = color;
        this->count++;

    }


private:
    int weight;
    string color;

    //  friend void Human::TakeApple(Apple& app);

};
void Human::TakeApple(Apple& app)
{
    cout << "TakeApple" << "Weight= " << app.weight << endl << "Color= " << app.color << endl;
    cout << app.count << endl;
}
void Human::EatApple(Apple& app)
{
    cout << "EatApple" << endl;
    cout << app.count << endl;
}
int Apple::count = 0;       // #92 ---- C++ !!!!!!

constexpr uint32_t calcPrescaler(uint32_t clock, uint32_t targetFreq) {
    return (clock / targetFreq) - 1;

}
constexpr uint32_t prescaler = calcPrescaler(10000, 1000);

enum class MotorState {
    Idle,
    Running,
    Fault


};*/
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

// 103
class Gun103
{
public:
	virtual void Shoot() // virtual - damit wir die Funktion überschreiben können(im anderen Projekt)         
    {          
		cout << "Gun103::Shoot(PA!)" << endl;
	}
};

class SubmachineGun103 : public Gun103      // Vererbung von Gun103 in SubmachineGun103
{
public:
	void Shoot() override // virtual - damit wir die Funktion überschreiben können(im anderen Projekt)         override ist für Compiler, damit er weiß, dass wir die Funktion überschreiben wollen
    {
        cout << "SubmachineGun103::Shoot(PA-BA-BA!)" << endl;
    }

};

class Player103 {

public:
    void Shoot(Gun103* gun) // wir können hier einen Pointer auf die Klasse Gun103 übergeben
    {
        gun->Shoot(); // damit rufen wir die Funktion Shoot() von der Klasse Gun103 auf
    }
};
// 98
class Human98 
{
public:
    string name;
    virtual void Study()
    {
        cout << "virtual" << endl;
    }
};

class Student98 : public Human98 
{
public:
    
    string gruop;
	 void Study() override
	{
		cout << "I'am studying in..." << 707 << endl;
	}
};

class Professor98 : public Human98 
{
public:
    
    string subject;

    void Study() override
    {
        cout << "I'am teaching..." << subject << endl;
    }
};

class ExtramuralStudent : public Student98
{

public:
    void Study() override
    {
        cout << "I'am studying extramural..." << endl;

    }
};
// #102
class Base102
{
public:
	Base102()
	{
		cout << "Base102 Constructor" << endl;
	}
	Base102(int a)
	{
		cout << "Base102 Constructor with parameter: " << a << endl;
	}
private:
	int x;
};

const uint32_t CRC32K9_POLYNOMIAL = 0x6938392D;
const uint32_t TABLE_SIZE = 256;

constexpr  std::array<uint32_t, 256> crc32k9_init_table()
{
    std::array<uint32_t, 256> table{};


    for (uint32_t i = 0; i < 256; i++)
    {
        uint32_t crc = (i << 24);							// Index
        for (int j = 0; j < 8; j++) {
            if((crc & 0x80000000) != 0)
            {           
                crc = (crc << 1) ^ CRC32K9_POLYNOMIAL;
            }
            else {
                crc <<= 1;		// oder Bitverschiebung
            }
        }
        table[i] = crc;
    }
    return table;
	cout << &table << endl;
}

const auto CRC32_TABLE = crc32k9_init_table();

void func(int a, int b, bool counter = false) 
{
    int c;
    c = a + b;
    cout << "func wird aufgerufen" << endl; 
    if (counter == true) 
    {
        static int cnt;
        cnt++;        
        cout << "check = true" << endl; 
        cout <<"result " << cnt << endl;
    
    }
    //return c;
    
}
class CanCounter 
{
public:
    CanCounter(uint8_t cnt) 
    {
        counter = cnt;
    }

    void incCounter()
    {
        counter++;
        if (counter >= 32) { counter = 0; }

    }
    uint8_t getCounter() const { return counter;}

    void reset() { counter = 0; }

private:
    uint8_t counter = 0;
};
uint8_t func(CanCounter& obj)
{
    //obj.incCounter();

    cout << (int)obj.getCounter() << endl;
    return obj.getCounter();

}
// 96
class Pixel {
public:
    Pixel() 
    {
        r = g = b = 0;
    }

    Pixel(int r, int g, int b)
    {
        this->r = r;
        this->g = g;
        this->b = b;
    }

    string GetInfo()
    {
        return "Pixel:  r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b);
    }

private:
    int r;
    int g;
    int b;
};

int main()
{   
    // Реализация односвязного списка c++ Часть 1 | Урок #133


    // Многопоточность | Потоки | thread | Многопоточное программирование | Уроки | C++ #1


    // Лямбда-выражения | Лямбда функции | Анонимные функции | Изучение С++ для начинающих. Урок #143


    // std::function | Полиморфная обёртка функции | Изучение С++ для начинающих. Урок #142


    // 139 Многофайловый проект | Изучение С++ для начинающих. Урок #139
    // Methoden schreiben wir in der .cpp Datei


    // 136 Ключевое слово auto | Изучение С++ для начинающих. Урок #136
    auto a = 10; 
    auto b = 32.65;
    auto c = "string";

    // ***statt constexpr  std::array<uint32_t, 256> crc32k9_init_table() 
    // können wir einfach auto schreiben!




    // 96 Массив объектов класса. Динамический. Статический. Создание Особенности. ООП C++ Для начинающих #96
    const int LENGTH = 5; 

    Pixel arr[LENGTH];
    arr[1] = Pixel(1, 2, 3);

    cout << arr[1].GetInfo() << endl;




    //
    // cout << (int*) " H ome of the j o l l y byte s ";



    /*CanCounter obj1(5);
    CanCounter obj2(0);
    obj2 = obj1;

    func(obj1);
    func(obj2);*/


    
   
   // cout << (int)func(obj2) << endl;
    //func(0, 1, true);
    //func(3, 4);
    //func(1, 1, true);




    //uint32_t arr[256];
    //crc32k9_init_table();
    // std::cout << hex << CRC32_TABLE[1] << endl;
    //uint8_t index = 30;

    //arr[index] = CRC32_TABLE[index];
    //cout << arr[index] << endl;

    //#102  Вызов конструктора базового класса из конструктора класса - наследника.Наследование.ООП C++ #102
	/*const uint8_t PGN_6912_SDM_SA = 0x21;

	cout << (~PGN_6912_SDM_SA & 0xFF) << endl; // 0x21
	cout << (PGN_6912_SDM_SA & 0xFF) << endl; // 0x21*/






    //#100 Порядок вызова конструкторов при наследовании. Как вызываются конструкторы. ООП C++ Начинающим #100






    //98 Наследование в ООП пример. Что такое наследование. Для чего нужно наследование классов. ООП. C++ #98

	/*Human98 human;
    Student98 student;
    Professor98 prof;
	ExtramuralStudent extramuralStudent;

    student.name = "Ivan";
    prof.subject = "Math";

    human.Study();
    student.Study();
    prof.Study();
	extramuralStudent.Study();
   
    
	

    return 0;*/
    

   //103 Виртуальные методы класса c++.Ключевое слово virtual.Ключевое слово override.ООП.C++ #103
	//******* wir verwenden virtuelle Methoden um Klassen zu vererben und eine eigene Implementierung(Methode) zu haben

   // Gun103 gun;
   // SubmachineGun103 michinegun;
	//gun.Shoot();    

   // Gun103* pnt = &gun;
   // Gun103* pnt2 = &michinegun; 

    //pnt->Shoot();

	//Player103 player;
	//player.Shoot(pnt2); // wir können hier einen Pointer auf die Klasse Gun103 übergeben

   




   // 94 Статические методы класса зачем нужны.Модификатор static.Как влияет.ООП.Для начинающих.Урок #94
  // Apple app;    // zugriff auf einer static Variable, direkt aus einer Klasse! 

 //  int val = 16;


  // Apple::SetCount(val);
  // Apple::GetCount();


  // app.foo(); 
   
   // return 0;



   // 92 static что это.Статические поля класса.Инициализация.Ключевое слово static.C++ #92
// static wird außer der Klasse definiert





// 91 Дружественные классы. ООП. friend class. friend c++ что это. C++ Для начинающих. Урок #91
// wir sollen einfach so tun: class Apple { friend Human; ...

// 90 Дружественный метод класса. ООП. friend c++ что это. Функции друзья. C++ Для начинающих. Урок#90
// Methode - ist in C++ eine Funktion, die im Class definiert wird; 
// wir verwenden das um die Klassen nicht zu vergrößern | Methode können draußen sein
/*
Human a;
Apple app(150, "Red");
a.TakeApple(app);
Apple app2(450, "Blue");
a.TakeApple(app2);
Apple app3(617, "Black");
a.TakeApple(app3);
*/






//a.EatApple(app);


// return 0;


 // 89 Определение методов вне класса. Вынести функцию в из класса. Вынести описание метода вне класса. #89
 /*
 MyClass89 a;
 a.PrintMessage89();
 */





 // 88 Дружественные функции и классы пример. Для чего используются. Как определяются. Для двух классов #88
 /*
 Point88 a;


 changeX(a);

 a.Print88();

 return 0;
 */


 // 83 Перегрузка операторов пример. ООП. Перегрузка оператора присваивания. C++ Для начинающих. Урок#83
 /*
 MyClass83 a(10);
 MyClass83 b(2);
 MyClass83 c(2);

 c = a = b;


 return 0;*/


 // 82 Конструктор копирования.Что это.Пример.Когда вызывается Копирование объектов по умолчанию C++ #82
 // !!! das ist kein C#, hier muss man jedes mal Pointer oder Link(&) verwenden!!!

 //MyClass82 a(1);

 //Foo(a);
// Foo82();

// return 0;



 // 81 Ключевое слово this в ООП. Что означает. Что это такое. Для чего нужен this указатель C++ #81
 // this - ist ein const zeiger

// Point78 a(1, 2);
 // Point78 b;



// 80 Деструктор что это.Зачем нужен деструктор класса в ООП.Деструктор с параметрами.Перегрузка. #80
 // Destruktor hat keine Parameter!!! 
 // der Destruktor wird automatisch aufgerufen!!! 
 // es ist wichtig zu tun mit new verwenden z.B. data = new int[size] 
// Point78 a(3);

// return 0;


 //78 Конструктор класса пример.Зачем нужен.Конструктор с параметрами.Конструктор по умолчанию.Урок#78
 /*cout << "Lesson 78" << endl;
 Point78 a(4, 11);
 Point78 b;
 a.Print();
 b.Print();*/







 // 77 Инкапсуляция ООП пример. private методы.Что такое инкапсуляция.C++ Для начинающих.Урок#77
/* CoffeGrinder c;
 c.Start();*/


 // 76 Что такое геттеры и сеттеры для класса.Методы get и set.Инкапсуляция это.Пример.C++ Урок #76
  /*cout << "Lesson 76" << endl;
  Point76 a;
  a.SetX(23);

  cout << a.GetX() << endl;*/




  // 75 Модификаторы доступа классов. public private protected что это.Спецификаторы доступа.C++ Урок #75
   // private - dafault Modofikator
   // protected = private! bei Vererbung haben wir Zugriff aif Protected aber nicht auf Private
   /*Point75 a;
   a.x = 3;
   a.SetValc(17);
   a.Print();*/




   // 69 Условный тернарный оператор что это.Как работает.Как использовать.C ++ Для начинающих.Урок #69
   /* int a;
    cin >> a;

    (a < 10) ? cout << "a < 10"<< endl : cout << "a > 10" << endl;    // es funktioniert genauso wi if(true) {} ales {};*/




    // 68 Условная компиляция. #ifdef #else #endif #if #elif #endif #ifndef что это.C ++ Урок #68
       /*#ifdef DEBUG
            cout << "Debug" << endl;
        #endif // DEBUG*/



        // 66 Препроцессор что это.Директива #define.Макросы.Директивы препроцессора что это.C ++ Урок #66
        // #define - definition 
        //cout << "Lesson 66" << endl;






        // 65 Указатель на функцию в качестве параметра. Передача функции в качестве параметра. С++ Урок #65
        //cout << "Lesson 65" << endl;
        // Polymorphismus 
        // Zeiger auf Funktion deklarieren
        //int (*namePointer)(int, int) = &add;
        //void(*fooPointer)();        // d.h. hier kann eine funktionsadresse sein POINTER!!!
       // string(*fooPointer_s)();        // d.h. hier kann eine funktionsadresse sein POINTER!!!

        //fooPointer = Foo2;    
        //fooPointer();

        //fooPointer_s = DataFromBD;
        //fooPointer_s = DataFromWS;

        ////// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        /*ShowInfo(GetDataFromBD);
        ShowInfo(GetDataFromWS);*/




        // 58 Приведение типов в стиле с.Явное и неявное преобразование типов.Преобразование типов.С++ Урок #61 
         /*cout << "Lesson 58" << endl;
         double d = 100.45;
         unsigned int c = 0;

         c = (unsigned int)d;
         cout << c << endl;*/

         // 57 Константные аргументы функции.Константный указатель.Константные параметры.Для начинающих Урок #57
         //cout << "Lesson 57" << endl;
         /*
         //int arr[5] = { 0,1,2,3,4 };
         int arr[5];

         FillArray(arr,5);
         ShowArray(arr, 5);
         */

         //cout << "Hello World!\n";

         //cout << "geben Sie bitte eine Zahl" << endl; 

         /*cin >> var_1;

         var_1 += 20;
         cout << var_1 << endl;
         cout << sizeof(var_1);*/




         //41 Шаблоны функций. Шаблонные функции c++. template typename. template class. Урок #41
        // cout << Sum(2, 45.1) << endl;
        //double var_2 = Sum(2.4, 14.7);
        // cout << Out(var_2) << endl;


         //46 Указатели c++ что это.Для чего нужны.Указатели c++ разыменование.C++ для начинающих.Урок #46
          /*
          int a = 5;

          int *px = &a;


          cout << Out(px) << endl;    // da bekommen wir eine Adresse
          cout << Out(*px) << endl;    // da bekommen wir einen Wert

          *px = 33;
          cout << Out(px) << endl;    // da bekommen wir eine Adresse
          cout << Out(*px) << endl;    // da bekommen wir einen Wert*/



          //47 Арифметика указателей.Указатели и массивы.Массив это указатель.C++ для начинающих.Урок #47
          // Puffer - Name ist ein Poinzer auf sein ersten Element
          /*cout << "Lesson 47" << endl;

          const int SIZE = 5;
          int arr[SIZE]{ 4, 55, 79, 1, 4 };
          //cout << *(arr+2) << endl;           // Zeigerarithmetik
          //cout << (arr+2) << endl;           // Zeigerarithmetik

          for (int i = 0; i < SIZE; i++)
          {
              cout << arr[i] << endl;
              cout << (arr+i) << endl;           // Zeigerarithmetik

          }*/

          // #48 Передача параметров в функцию по указателю c++. Передача указателя в функцию си. Урок #48
          /*cout << "Lesson 48" << endl;

          int a = 5;

          int* px = &a;
          Outp(px);
          cout << a << endl;*/

          // #49 c++ ссылки что это. c++ ссылки и указатели разница. Указатель на ссылку. Для начинающих. Урок #50
          /*cout << "Lesson 49" << endl;

          int a;

          int& ref_a = a;*/


          // #53 new c++ что это. new c++ пример. c++ new delete. delete c++ что это. delete c++ пример. Урок #53
          /*cout << "Lesson 53" << endl;

          int* pa = new int;      // da erstelen wir einen neuen Pointer

          pa = 0;
          cout << pa << endl;

          delete pa;*/

}


