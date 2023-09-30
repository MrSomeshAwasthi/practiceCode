#include<bits/stdc++.h>
using namespace std;
int main()
{
    // /*pattern 1*/
    // for (int i=0;i<5;i++)
    // {
    //     for (int j=0;j<4;j++)
    //         cout<<"* ";
    //     cout<<endl;
    // }


    // /*pattern 2*/
    // for (int i=1;i<=5;i++)
    // {
    //     for(int j=0;j<i;j++)
    //         cout<<"*";
    //     cout<<endl;
    // }


    // /*pattern 3*/
    // for (int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //         cout<<j;
    //     cout<<endl;
    // }


    // /*pattern 4*/
    // for (int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //         cout<<i;
    //     cout<<endl;
    // }


    // /*pattern 5*/
    // for (int i=0;i<5;i++)
    // {
    //     for (int j=i;j<5;j++)
    //         cout<<"* ";
    //     cout<<endl;
    // }


    // /*pattern 6*/
    // for (int i=0;i<5;i++)
    // {
    //     for(int j=1;j<=5-i;j++)
    //         cout<<j;
    //     cout<<endl;
    // }


    // /*pattern 7*/
    // for (int i=0;i<5;i++)
    // {
    //     for(int j=i;j<5;j++)
    //         cout<<" ";
    //     for (int j=0;j<2*i+1;j++)
    //         cout<<"*";
    //     cout<<endl;
    // }


    // /*pattern 8*/
    // for (int i=0;i<5;i++)
    // {
    //     for(int j=0;j<i;j++)
    //         cout<<" ";
    //     for(int j=0;j<2*(4-i)+1;j++)
    //         cout<<"*";
    //     cout<<endl;
    // }


    // /*pattern 9*/
    // int count=0;
    // for (int i=0;i<5;i++)
    // {
    //     if (!count)
    //     {
    //         for (int j=0;j<4-i;j++)
    //             cout<<" ";
    //         for (int j=0;j<2*i+1;j++)
    //             cout<<"*";
    //         cout<<endl;
    //         if (i==4)
    //         {
    //             count=1;
    //             i=0;
    //         }
    //     }
    //     if (count)
    //     {
    //         for (int j=0;j<i;j++)
    //             cout<<" ";
    //         for (int j=0;j<2*(4-i)+1;j++)
    //             cout<<"*";
    //         cout<<endl;
    //     }
    // }


    // /*pattern 10*/
    // int count=0;
    // for(int i=0;i<5;i++)
    // {
    //     if (!count)
    //     {
    //         for(int j=0;j<i+1;j++)
    //             cout<<"*";
    //         cout<<endl;
    //         if (i==4)
    //         {
    //             count=1;
    //             i=0;
    //         }
    //     }
    //     if(count)
    //     {
    //         for(int j=0;j<4-i;j++)
    //             cout<<"*";
    //         cout<<endl;
    //     }
    // }


    // /*pattern 11*/
    // for (int i=1;i<=5;i++)
    // {
    //     for(int j=0;j<i;j++)
    //     {   
    //         cout<<(i+j)%2?"0":"1";
    //     }
    //     cout<<endl;
    // }


    // /*pattern 12*/
    // for(int i=1;i<5;i++)
    // {
    //     for (int j=1;j<=i;j++)
    //         cout<<j;
    //     for (int j=1;j<=4-i;j++)
    //         cout<<" ";
    //     for (int j=1;j<=4-i;j++)
    //         cout<<" ";
    //     for (int j=4-(4-i);j>=1;j--)
    //         cout<<j;
    //     cout<<endl;
    // }


    // /*pattern 13*/
    // int count=1;
    // for (int i=0;i<5;i++)
    // {
    //     for (int j=0;j<i+1;j++)
    //         cout<<count++<<" ";
    //     cout<<endl;
    // }


    // /*pattern 14*/
    // char a='A';
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<i+1;j++)
    //         cout<<char(a+j);
    //     cout<<endl;
    // }


    // /*pattern 15*/
    // char a='A';
    // for (int i=0;i<5;i++)
    // {
    //     for (int j=0;j<5-i;j++)
    //         cout<<char(a+j);
    //     cout<<endl;
    // }


    // /*pattern 16*/
    // char a='A';
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<i+1;j++)
    //         cout<<char(a+i);
    //     cout<<endl;
    // }


    // /*pattern 17*/
    // int nc;
    // for(int i=0;i<5;i++)
    // {
    //     for (int j=0;j<4-i;j++)
    //         cout<<" ";
    //     char a='A';
    //     for (int j=0;j<2*i+1;j++)
    //         {
    //             if (j<i)
    //                 cout<<a++;
    //             else 
    //                 cout<<a--;
    //         }
    //     cout<<endl;
    // }


    // /*pattern 18*/
    // for (int i=0;i<5;i++)
    // {
    //     for (char ch='E'-i;ch<='E';ch++)
    //         cout<<ch;
    //     cout<<endl;
    // }


    // /*pattern 19*/
    // for(int i=0;i<5;i++)
    // {   
    //     for(int j=0;j<5-i;j++)
    //         cout<<"*";
    //     for(int j=0;j<i;j++)
    //         cout<<"  ";
    //     for(int j=0;j<5-i;j++)
    //         cout<<"*";
    //     cout<<endl;
    // }
    // for(int i=0;i<5;i++)
    // {   
    //     for(int j=0;j<i+1;j++)
    //         cout<<"*";
    //     for(int j=0;j<4-i;j++)
    //         cout<<"  ";
    //     for(int j=0;j<i+1;j++)
    //         cout<<"*";
    //     cout<<endl;
    // }



    // /*pattern 20*/

    // for(int i=0;i<5;i++)
    // {   
    //     for(int j=0;j<i+1;j++)
    //         cout<<"*";
    //     for(int j=0;j<4-i;j++)
    //         cout<<"  ";
    //     for(int j=0;j<i+1;j++)
    //         cout<<"*";
    //     cout<<endl;
    // }
    // for(int i=1;i<5;i++)
    // {   
    //     for(int j=0;j<5-i;j++)
    //         cout<<"*";
    //     for(int j=0;j<i;j++)
    //         cout<<"  ";
    //     for(int j=0;j<5-i;j++)
    //         cout<<"*";
    //     cout<<endl;
    // }


    // /*pattern 21*/
    // for (int i=0;i<5;i++)
    // {
    //     for(int j=0;j<5;j++)
    //     {
    //         if (i==0 ||i==4)
    //             cout<<"*";
    //         else 
    //             {
    //                 if (j==0||j==4)
    //                     cout<<"*";
    //                 else
    //                     cout<<" ";
    //             }
    //     }
    //     cout<<endl;
    // }



    /*pattern 22*/
    for (int i=0;i<7;i++)
    {
        for (int j=0;j<7;j++)
        {
            int top=i;
            int left=j;
            int right=6-j;
            int bottom=6-i; 
            cout<<(4-min(min(top,bottom),min(left,right)));
        }   
        cout<<endl;
    }
    return 0;
}
