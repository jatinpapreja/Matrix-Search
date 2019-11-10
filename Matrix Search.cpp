#include<iostream>
using namespace std;
void numsearch(int a[][30],int number,int m,int n)
{
    int i=0;
    int j=n-1;
    int flag=0;
    while(i!=m && j!=-1)
    {
        if(a[i][j]==number)
        {
            flag=1;
            cout<<"1";
            break;
        }
        else if(a[i][j]>number)
        {
            j--;
        }
        else if(a[i][j]<number)
        {
            i++;
        }
    }
    if(flag==0)
    { cout<<"0";   }
}
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][30];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    int number=0;
    cin>>number;
    numsearch(a,number,m,n);
    return 0;
}
