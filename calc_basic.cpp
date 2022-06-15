#include <iostream>
#include<limits.h>

using namespace std;
double myPow(int x, int n);
#pragma message("operations can perform: + , - , x , / , % , (~: exponential)")


int main(int argc, char* argv[])
{
    int Num1=0,Num2=0;
    char Operator;
    if (argc != 4)
    {
        cerr << "error :" << argv[0] << endl;
        exit(0);
    }
    else
    {
         Num1 = atoi(argv[1]);
         Operator = *(argv[2]);
         Num2 = atoi(argv[3]);
    }
       // cout<<"successfully passed the argument : the operator assigned : "<<theOperator;

        switch (Operator)
        {
        case '+':
            {
                cout << "The summation answer is " << Num1 + Num2 << endl;
                break;
            }
        case '-':
            {
                cout << "The subsracted result is " << Num1 - Num2 << endl;
                break;
            }
        case 'x':
            {
                cout << "The muitple is " << Num1 * Num2 << endl;
                break;
            }
        case '/':
            {
                if (Num2 == 0)
                {
                    cout << "Can not devide by a ZERO" << endl;
                    break;
                }
                else
                {
                    cout << "The division is " << Num1 / Num2 << endl;
                    break;
                }
            }
        case '%':
            {
                 if (Num2 == 0)
                {
                    cout << "Can not devide by a ZERO" << endl;
                    break;
                }
                else
                {
                    cout << "The reminder  is " << Num1 % Num2 << endl;
                    break;
                }
            }
        case '~':
            {
                cout << "The exponential result is " << myPow(Num1,Num2) << endl;
                break;
            }

        }


}

    double myPow(int x, int n) {
      if(x!=1 && x!=-1){
        if (n==0){
            return 1;
        }
         else if(n>0){
      double pow=1.00000;
        if(n>=INT_MAX){
              int diff=n-INT_MAX;
         n-=diff;
         while(n!=0){
             pow *=x;
            if(pow==0)
            n=0;
            else
            --n;
         }
         //pow*=0;
            }
    else {
        while(n!=0){
            pow *=x;
           --n;
        }

    }
         return pow;
        //return x*myPow(x,(n-1));
        }
        else if(n<0){
        int p=0;
            if(n==INT_MIN)
           p=abs(n+1);
        else
            p=abs(n);
            double val=1/x;
      return myPow(val,p);


    }

      }
     else if(x==1)
             return 1;
      else if(x==-1){
            if ((n%10)%2==0)
                 return 1 ;
             else
        return -1;
      //     double p = (double) (n%10);
      //       return p;
       }

   return 0;
  }


