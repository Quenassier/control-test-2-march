#include <iostream>

using namespace std;
int main()
{
    int sum=0;
    int num = 110;

    int* Arr = (int*)malloc(num*sizeof(int));
    int Sum = 0, i = 0;
    
    do
    {
        cout << "Vvedite element massiva :";
        cin >> Arr[i];
        Sum = Sum + Arr[i];
        
        if (Arr[i] == -1)break;
        i++;
    }
    

    while (Arr[i] != Sum);
    cout << Sum;
    return 0;

}
