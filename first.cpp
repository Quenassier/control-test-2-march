#include <iostream>
using namespace std;
 
int main() 
{
    int num;
    int a;
    int sum = 0;
    cout << "a="; 
    cin >> a;
    
    if (a<-2)
    {
        if(a%2==0) a+=1;
    
  for (int i = a; i < 0; i+=2)        
            sum+=i; 
        
        cout << "sum=" << sum << "\n";
    }
    else cout << "neverny number\n";
return 0;    
}
