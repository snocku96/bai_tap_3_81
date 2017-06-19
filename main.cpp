#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello OngHuy!" << endl;
    int num_1;
    int num_2;
    int total;

    while(1){
        cout<<"Please enter the first number:";
        cin>>num_1;
        cout <<"Please enter the second number:";
        cin >>num_2;
        total=num_1+num_2;
        cout<<"The total is "<<total<<endl;
        if(num_1==0 ||num_2 ==0)
            break;
    }
    return 0;
}
