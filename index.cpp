#include <iostream>

using namespace std;
int main() {
    cout<<"Введіть число "<<endl;
    int i = 1;
    int n;
    cin>>n;
    int sum = 0;
    do{
        sum+=i;
        i++;
    }while(n>i);
    cout<<"Сумма чисел = "<<sum<<endl;
    return 0;
}
