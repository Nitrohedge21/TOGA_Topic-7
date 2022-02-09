// 09/02/2022
// The beginning of topic 7

#include <Windows.h>
#include <time.h>
#include <string>
#include <iostream>
using namespace std;


int main()
{
    float TheFloat = 10.0f;
    float* ThePointer = &TheFloat;
    cout << TheFloat << endl;
    *ThePointer = 20.0f;
    cout << *ThePointer << endl;
    cout << TheFloat << endl;

    int TheInt = 0;
    int* pointer1 = &TheInt;
    *pointer1 = *pointer1 + 5;
    int* pointer2 = &TheInt;
    *pointer2 = *pointer2 + 3;

    cout << TheInt << endl;


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