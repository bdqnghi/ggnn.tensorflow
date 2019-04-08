int main()
{
    char a[200],*q;
    gets(a);            //????? 
    q=a;
    for(int i=0;i<strlen(a);i++)
    {if(*(q+i)!=' ')
       cout<<*(q+i);
     if(*(q+i)==' ')         //??????? 
       if(*(q+i-1)!=' ')
       cout<<*(q+i);
       }
       cout<<endl;
   

return 0;
}
