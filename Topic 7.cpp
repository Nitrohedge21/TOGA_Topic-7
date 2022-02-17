// 09/02/2022 Last Update: 16.02.2022
// The beginning of topic 7

#include <Windows.h>
#include <time.h>
#include <string>
#include <iostream>
using namespace std;

void AddOne(int* n)
{
    *n = *n + 1;
}
class Player
{
public:

    int _integer;
    float floatt;
    bool _bool;
    string _string;

    Player()
    {

        _integer = 1;

    };
    
    
};


int main()
{
    /*float TheFloat = 10.0f;
    float* ThePointer = &TheFloat;
    cout << TheFloat << endl;
    *ThePointer = 20.0f;
    cout << *ThePointer << endl;
    cout << TheFloat << endl;*/

    /*int TheInt = 0;
    int* pointer1 = &TheInt;
    *pointer1 = *pointer1 + 5;
    int* pointer2 = &TheInt;
    *pointer2 = *pointer2 + 3;*/

    /*cout << TheInt << endl;*/

    int x = 5;
    int* pointer1 = &x;
    cout << "The current value of x is " << x << endl;
    AddOne(pointer1);
    cout << "The new value of x is " << x << endl;

    /*int* integerPointer = &x;*/

    Player player1;
    
    Player* playerPointer = &player1;
    (*playerPointer).floatt = 10.0f;
    playerPointer->_integer = 5;
// trying to use playerPointer._integer turns the code into the one below by it's own. That's actually pretty useful????
    cout << (&playerPointer) << endl;
    cout << &player1 << endl;
    

}


// Cut Stuff

/*for (int i = 5; i >= 0; i--)
    {
        cout << "10 divided by " << i << " is " << (10 / i) << endl;
    }*/

/* for (int i = 0; i == 0; i += 0)
      {

      }*/

/* cout << &TheFloat << endl;
    system("CLS");*/