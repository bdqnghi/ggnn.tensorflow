int reverse(int num)
{
    int i=1,sum=0,yushu[50],j,k,p=0;//yushu???? 
    if (num<0)
    {
              num=-num;//????0?????? 
              p=-1;//???? 
    }
    while(num>=1)
    {
                yushu[i]=num%10;//??????? 
                i++;
                num=num/10;
    }
    for(j=1;j<i;j++)
    { 
        for(k=0;k<i-1-j;k++) yushu[j]=yushu[j]*10;//????? 
        sum=sum+yushu[j];
    }
    if (p==-1) sum=-sum;//?????????? 
    return sum;
}
int main()
{
    int input,output;//????????? 
    int i;//??? 
    for(i=0;i<6;i++)
    { 
                     cin>>input;
                     output=reverse(input);
                     cout<<output<<endl;
    }
    cin.get();cin.get();cin.get();cin.get();cin.get(); 
    return 0;
}
