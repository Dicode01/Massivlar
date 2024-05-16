#include <iostream>

using namespace std;

int main()
{
    /*/// Berilgan 5 ta sondan eng katta yig'indini hosil qiling
    6, 8, 9, 2, 1, 0, 4,  11, 12, 50, 22  shulani ichidan eng katta
    yig'indi hosil qilish kerak*/
    int n,s=0;
    cout<<"Nechta son bor"; cin>>n;
    int a[n],temp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<", ";
        s+=a[i];
    }
cout<<"Eng katta summa: "<<s;
    return 0;
}
