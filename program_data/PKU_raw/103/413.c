int main()
{
    char a[1999];
    int i,t;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i]<='z'&&a[i]>='a')
       a[i]-=32;
    }
    for(i=0;a[i]!='\0';i++)
    {
       if(a[i+1]==a[i])
       {
         t=1;
         while(a[i+1]==a[i])
         {
           t++;
           i++;
         }
         cout<<"("<<a[i]<<","<<t<<")";
       }
       else
       cout<<"("<<a[i]<<","<<1<<")";
       
    }
    int ss;cin>>ss;
    return 0;
}    
