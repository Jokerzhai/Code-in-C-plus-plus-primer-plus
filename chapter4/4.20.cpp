//using pointers to strings
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char animal[20] = "bear";   //animal holds bear
    const char *bird = "wren"; //birds holds address of string
    char *ps;                   //uninitialized

    cout << animal << " and ";  //display bear
    cout << bird << "\n";       //display wren

    cout << "Enter a kind of animal : ";
    cin  >> animal;             //ok if input < 20chars

    ps = animal;                //set ps to point to string
    cout << ps << "!\n";
    cout << "Before using strcpy() :\n";
    cout << animal << " at " << (int * )animal << endl;
    cout << ps << " at " << (int *) ps <<endl;

    ps = new char[strlen(animal) + 1];  //get new storage
    strcpy(ps,animal);                  //copy string to new storage
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *)animal <<endl;
    cout << ps << " at" << (int *)ps << endl;
    delete [] ps;
    return 0;
}
