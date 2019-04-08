int main()
{
    char a[100];
    cin>>a;
    int s=0;
    for (int i=0;i<101;i++)
    {
        if (a[i]=='\0')
        break;
        s++;
    }
    int b[100],c[100];
    for (int i=0;i<s;i++)
     b[i]=a[i]-48;
     if (s==1)
     cout<<0<<endl<<b[0];
    else if (s==2&&(b[0]*10+b[1])<13)
    cout<<0<<endl<<b[0]*10+b[1];
    else
     {
     int k=0;
     int m=0;
     int p=0;
     int q=s;
    for(;;)
    {
           m=b[k]*10+b[k+1];
          c[p]=m/13;
          p++;
          b[0]=m%13;
          for (int j=1;j<q;j++)
            b[j]=b[j+1];
         q--;                     
      if (q==1)
      break;
    } 
    for(;;)
    {
       if (c[0]!=0)
       break;
       else
       {   
           for (int j=0;j<p-1;j++)
          c[j]=c[j+1];
          p--;    
       }
       }
    for (int i=0;i<p;i++)
    cout<<c[i]; 
    cout<<endl; 
    cout<<b[0];
   }          
   return 0;

}

