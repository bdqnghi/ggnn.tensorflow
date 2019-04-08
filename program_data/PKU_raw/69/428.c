int main()
{
    int n,i,m,k,p,q;
    int c[251];
    char a[250],b[250],d;
    gets(a);
    p=strlen(a);
    if(p<250)
    {for(i=0;(d=a[i])!='\0';i++)
     m=i+1;}
     else m=250;
    
    gets(b);
    q=strlen(b);
    if(q<250)
    {for(i=0;(d=b[i])!='\0';i++)
     n=i+1;}
     else n=250;
    
    for(i=m-1;i>=0;i--)
      a[250-m+i]=a[i];
    for(i=n-1;i>=0;i--)
      b[250-n+i]=b[i];
       
       
    for(i=0;i<250-m;i++)
    a[i]=0;
    for(i=250-m;i<250;i++)
    a[i]=a[i]-48;
    
    for(i=0;i<250-n;i++)
    b[i]=0;
    for(i=250-n;i<250;i++)
    b[i]=b[i]-48;
      
      for(i=249;i>=1;i--)
      {if(a[i]+b[i]>9)
       {c[i+1]=a[i]+b[i]-10;
        a[i-1]=a[i-1]+1;}
       else c[i+1]=a[i]+b[i];}
      
      if(a[0]+b[0]>9)
        {c[1]=a[0]+b[0]-10;
         c[0]=1;}
      else 
        {c[1]=a[0]+b[0];
         c[0]=0;}
     i=0;
     do
     {i=i+1;}
     while(c[i]==0);
      k=i;
     
     if(k<251)
     {for(i=k;i<251;i++)
      {c[i]=c[i]+48;
       printf("%c",c[i]);}}
     else
     printf("0");
      
      
      return 0;
}     