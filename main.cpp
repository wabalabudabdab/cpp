#include <QCoreApplication>
#include <iostream>
#include <cstdlib>


using namespace std;

int main(int argc, char *argv[])

//creating 2dimentional array
{
    QCoreApplication a(argc, argv);

    int t,i,nums[3][4];

    for (t=0; t<3; ++t){
        for(i=0; i<4; ++i){
            nums[t][i] = (t*4)+i+1;

            cout << nums[t][i] << ' ';
        }
        cout << '\n';
    }

//bubble sort
{
    int nums[10];
    int a, b, t;
    int size;

    size = 10;

    for(t=0; t<size; t++) nums[t] = rand();

    cout << "Исходный массив:\n ";
    for (t=0; t<size;t++) cout << nums[t] << ' ';
    cout << '\n';

    for (a=1; a<size; a++)
        for(b=size-1; b>=a; b--){
            t=nums[b-1];
            nums[b-1] = nums[b];
            nums[b] = t;
        }

    cout << "\nОтсортированный массив:\n  ";
    for(t=0; t<size; t++) cout << nums[t] << ' ';

}


    return 0;
}
