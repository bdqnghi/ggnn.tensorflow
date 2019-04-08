int function1(char zimu)
{
    int panduan;
    panduan=zimu;
    if (((panduan>=65)&&(panduan<=90))||((panduan>=97)&&(panduan<=122))||(panduan==95)) return 1;//??????????? 
    else return 0;    
}//????????????? 
char function2(char zimu)
{
    int panduan;
    panduan=zimu;
    if (((panduan>=65)&&(panduan<=90))||((panduan>=97)&&(panduan<=122))||(panduan==95)||((panduan>=48)&&(panduan<=57))) return 1;//?????????????? 
    else return 0;//???????????????? 
}

int main()
{
    char str[81];
    int n,i,j,count,changdu,panduan;
    cin>>n;
    for(i=0;i<n;i++)
    {
                    cin.get();
                    count=0;
                    cin.get(str,81);
                    changdu=strlen(str);
                    if(changdu==0)cout<<" 0"<<endl;
                    else
                    {
                       for(j=0;j<changdu;j++)
                       {
                        if(j==0)
                        {
                                if(function1(str[j]))count++;
                        }
                        else
                        {
                                if(function2(str[j]))count++;
                        }
                       }
                       if(count==changdu && count!=0)cout<<"1"<<endl;//????????????? 
                       else cout<<"0"<<endl;
                    }
    }
cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();cin.get();
return 0;
}