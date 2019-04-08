int main()
{
    int ff(char str[]);
    int t,i,p;
    char str[1000];
    cin>>t;
    getchar();
    for(i=1;i<=t;i++)
   {
    cin.getline(str,800,'\n');
    p=ff(str);
    cout<<p<<endl;
    str[0]=0;
   }
return 0;
}


   int ff(char str[])
{
      int j,n=0,x=1;
      
      if((str[0]>=65&&str[0]<=90)|| (str[0]>=97&&str[0]<=122)||(str[0]=='_'))
         {
           for(j=1;j<=strlen(str)-1;j++)
           {
               if((str[j]>=65&&str[j]<=90)|| (str[j]>=97&&str[j]<=122)||(str[j]=='_')||(str[j]>=48&&str[j]<=57))
                  {n=1; continue;}
               else {x=0; n=0;break;}
           } 
           {
            if(n)
                {x=1;n=0;}    
            else x=x;
            }
         }
      else x=0;
    return (x);
}

      
      
