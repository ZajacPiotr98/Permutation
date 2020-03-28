#include <iostream>

using namespace std;

int main()
{
    int iloscele;
    cin >> iloscele;
    int t[iloscele];
    for (int i=0;i<iloscele;i++)
        t[i]=i+1;
            for (int i=0;i<iloscele;i++)
                cout << t[i]<<" ";
                cout <<endl;
for (int j=0;j<iloscele;j++){
    for (int i=0;i<iloscele;i++){
    if (i==iloscele-1){
        int c=t[j];
        t[j]=t[i];
        t[i]=c;
         for (int k=0;k<iloscele;k++)
                cout << t[k]<<" ";
                cout <<endl;
    }
    else {
        int c=t[i];
        t[i]=t[i+1];
        t[i+1]=c;
                 for (int k=0;k<iloscele;k++)
                cout << t[k]<<" ";
                cout <<endl;
    }
    }
}
    return 0;
}
