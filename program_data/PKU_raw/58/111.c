int f(char str[81])//?????????C++??? 
{ 
    int g=1;//g????? 
    if((str[0]<65)||(str[0]>122)||((str[0]>90)&&(str[0]<97)&&(str[0]!=95)))
    {
        g=0;
    }
    else
        for(int i=1;i<=80;i++) //?????????????? 
        {
            if(str[i]!='\0')//?????????????? 
            {  
                if(((str[i]>=65)&&(str[i]<=90))||((str[i]>=97)&&(str[i]<=122))||(str[i]==95)||((str[i]>=48)&&(str[i]<=57))) 
                g=g*1;
                else
                { 
                   g=0; 
                   break;
                }
             } 
        }
    return g; 
} 
int main()
{
    int n;
    char str[100][81];//????????? 
    int end[100];//???????? 
    cin>>n;
    cin.get(); 
    for(int i=0;i<n;i++) //????? 
    {
            cin.getline(str[i],81); 
    }
    for(int i=0;i<n;i++)//??????? 
    {
            end[i]=f(str[i]);
    }
    for(int i=0;i<n;i++)//???? 
    {
            cout<<end[i]<<endl; 
    }
    return 0; 
} 
