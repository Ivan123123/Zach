#include <iostream.h>
#include <conio.h>
using namespace std;

int main()
{

        int gl=0, sg=0, i, j;
        char gls[]="qwrtpsdfghjklzxcvbnm";
        char str[100];
        cout<<"Enter string: ";
        cin>>str;
        for(i=0; i<(strlen(str)); i++)
                for(j=0; j<strlen(gls); j++)
                        if(str[i]==gls[j])
                                gl++;
        cout<<endl<<"Soglasnyh bukv - "<<gl<<endl;
        system("pause");
        return 0;
}
