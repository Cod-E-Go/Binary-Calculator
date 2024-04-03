#include<iostream>
using namespace std;

void add();
void subt();
void mul();
void div();
void ConvertAnother();

int main() {

    int choice;

    cout<<" \t\t      WELCOME_TO_BINARY_CALCULATOR!     \n";
    cout<<"\t\t         By GROUP-1 \n";
    cour<<"\t\t Created By: Edcor Zacal
    cout<<endl;
    cout<<"PLEASE SELECT AN OPERATOR:   \n[1.]ADDITION. \n[2.]SUBTRACTION. \n[3.]MULTIPLICATION \n[4.]DIVISION.";
    cout<<endl<<">>";
    cin>>choice;

    if(choice==1) {
        cout<<endl;
        system("cls");
        add();
    }
    else if(choice==2) {
        cout<<endl;
        system("cls");
        subt();
    }
    else if(choice==3) {
        cout<<endl;
        system("cls");
        mul();
    }
    else if (choice==4) {
        cout<<endl;
        system("cls");
        div();
    }
    else {
        cout<<endl;
        cout<<"INVALID_INPUT \n";
        cout<<"PLEASE TRY AGAIN!";

    }
    //system("pause");
    return 0;
}

void add()
{
    int bin2, bin1, dec1=0, dec2=0, i1=1, i2=1, rem1, rem2, inspct=0, result=0;

    cout<<" Enter the First Binary Number: ";
    cin>>bin1;
    cout<<" Enter the Second Binary Number: ";
    cin>>bin2;

    while(bin1!=0 || bin2!=0)
    {
        rem1 = bin1%10;
        rem2 = bin2%10;
        if(rem1>1 && rem2>1)
        {   inspct++;
            break;
        }
        dec1 = dec1 + (rem1*i1);
        dec2 = dec2 + (rem2*i2);
        i1 = i1*2;
        i2 = i2*2;
        bin1 = bin1/10;
        bin2 = bin2/10;
    }
    if(inspct==0)
    {


        result=dec1+dec2;
        cout<<"Decimal Values: ";
        cout<<dec1<<" * "<<dec2<<" = "<<result;
        int DeciNum, BinNum[20], i=0;
        DeciNum = result;
        while(DeciNum!=0)
        {
            BinNum[i] = DeciNum%2;
            i++;
            DeciNum = DeciNum/2;

        }
        cout<<"\nEquivalent Binary Result: ";
        for(i=(i-1); i>=0; i--)
            cout<<BinNum[i];
        cout<<endl;

    } else
        system("cls");
    cout<<"Invalid";

    ConvertAnother();
    cout<<endl;

}
void subt()
{
    int bin1, bin2, dec1=0, dec2=0, i1=1, i2=1, inspct=0, rem1, rem2, result=0;
    cout<<"Enter First Binary Number: ";
    cin>>bin1;
    cout<<"Enter Second Binary Number: ";
    cin>>bin2;
    while(bin1!=0 && bin1!=0)
    {
        rem1 = bin1%10;
        rem2 = bin2%10;
        if(rem1>1&&rem2>1)
        {   inspct++;
            break;
        }
        dec1 = dec1 + (rem1*i1);
        dec2 = dec2 + (rem2*i2);
        i1 = i1*2;
        i2 = i2*2;
        bin1 = bin1/10;
        bin2 = bin2/10;
    }
    if(inspct==0)
    {
        result=dec1-dec2;
        cout<<"Decimal Values: ";
        cout<<dec1<<" * "<<dec2<<" = "<<result;
        int DeciNum, BinNum[20], i=0;
        DeciNum=result;
        while(DeciNum!=0)
        {
            BinNum[i] = DeciNum%2;
            i++;
            DeciNum = DeciNum/2;
        }
        cout<<"\nEquivalent Binary Result: ";
        for(i=(i-1); i>=0; i--)
            cout<<BinNum[i];
        cout<<endl;
    } else
        system("cls");
    cout<<"Invalid";

    ConvertAnother();
    cout<<endl;

}
void  mul()
{
    int bin1, bin2, dec1=0, dec2=0, i1=1, i2=1, inspct=0, rem1, rem2, result = 0;

    cout<<" Enter the First Binary Number: ";
    cin>>bin1;
    cout<<" Enter the Second Binary Number: ";
    cin>>bin2;
    while(bin1!=0 && bin1!=0)
    {
        rem1 = bin1%10;
        rem2 = bin2%10;
        if(rem1>1&&rem2>1)
        {   inspct++;
            break;
        }
        dec1 = dec1 + (rem1*i1);
        dec2 = dec2 + (rem2*i2);
        i1 = i1*2;
        i2 = i2*2;
        bin1 = bin1/10;
        bin2 = bin2/10;
    }
    if(inspct==0)
    {
        result = dec1*dec2;
        cout<<"Decimal Values: ";
        cout<<dec1<<" * "<<dec2<<" = "<<result;
        int DeciNum, BinNum[20], i=0;
        DeciNum = result;
        while(DeciNum!=0)
        {
            BinNum[i] = DeciNum%2;
            i++;
            DeciNum = DeciNum/2;

        }
        cout<<"\nEquivalent Binary Result: ";
        for(i=(i-1); i>=0; i--)

            cout<<BinNum[i];
        cout<<endl;


    } else
        system("cls");
    cout<<"Invalid";

    ConvertAnother();
    cout<<endl;

}
void div()
{
    int bin1, bin2, dec1=0, dec2=0, i1=1, i2=1, inspct=0, rem1, rem2, result =0;

    cout<<"Enter the First Binary Number: ";
    cin>>bin1;
    cout<<"Enter the Second Binary Number: ";
    cin>>bin2;
    while(bin1!=0 && bin1!=0)
    {
        rem1 = bin1%10;
        rem2 = bin2%10;
        if(rem1>1 && rem2>1)
        {   inspct++;
            break;
        }
        dec1 = dec1 + (rem1*i1);
        dec2 = dec2 + (rem2*i2);
        i1 = i1*2;
        i2 = i2*2;
        bin1 = bin1/10;
        bin2 = bin2/10;
    }
    if(inspct==0)
    {
        result=dec1/dec2;

        cout<<"Decimal Values: ";
        cout<<dec1<<" / "<<dec2<<" = "<<result;
        int DeciNum, BinNum[20], i=0;
        DeciNum = result;
        while(DeciNum!=0)
        {
            BinNum[i] = DeciNum%2;
            i++;
            DeciNum = DeciNum/2;
        }
        cout<<"\nEquivalent Binary Result: ";
        for(i=(i-1); i>=0; i--)
            cout<<BinNum[i];
        cout<<endl;

    } else
        system("cls");
    cout<<"Invalid";

    ConvertAnother();
    cout<<endl;
}
void ConvertAnother() {

    char choice;

    cout<<"  Do you want to Choose Another Operation? (Y/N): ";
    cin>>choice;
    cout<<endl;

    if(choice=='Y' || choice=='y')
    {
        system("cls");
        main();
        cout<<endl;
    }
    else if(choice=='N' || choice=='n')
    {
        system("cls");
        cout<<"THANK YOU FOR USING BINARY CALCULATOR. GODBLESS! " <<endl;
    }
    else {
        system("cls");
        cout<<"INVALID_INPUT" <<endl;
        cout<<"PLEASE TRY AGAIN!" <<endl;
        cout<<endl;
        ConvertAnother();
        cout<<endl;
    }

}