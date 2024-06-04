#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int r = -1;
    int c = -1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin>>x;
            if(x==1){
                r=i;
                c=j;
                break;
            }
            arr[i][j]=x;
        }
    }
    cout<<abs(2-r)+abs(2-c);
    return 0;
}