void reserve(int a)//?????? 
{
     int rest,yu;
     yu=a%10;//?????????
     a=a/10; 
     if (a>=1)
     {
                 cout<<yu;
                 reserve(a);
     }
     else cout<<yu<<endl;
}
int main()
{
    int input,i;//?????i???? 
    for(i=0;i<6;i++)
    {
                    cin>>input;
                    if (input<0)
                    {
                                cout<<"-";
                                input=-input;
                    }
                    for(;;)//??????0 
                    {
                           if (input%10==0) input=input/10;
                           else break;
                    } 
                    reserve(input);
    }
    cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();cin.get(); 
    return 0;
}
