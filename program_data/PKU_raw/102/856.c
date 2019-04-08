int main()
{
    int i,j,m,l,p,q,k,a1,b1;
    double n;
    char s[1000];
      scanf("%d",&m); 
    double a[100],b[100];
    memset(b,0,sizeof(b));
    memset(a,0,sizeof(a));
    l=0;
    a1=0;b1=0;
    for (i=1;i<=m;i++)
    {
        scanf("%s %lf",s,&n);
       
     if (s[0]=='m') 
     { 
       p=0;
       for (j=1;j<=a1;j++)
       if (n<a[j]) 
       {
        for (k=a1;k>=j;k--)
       a[k+1]=a[k];  
       a[j]=n;
       p=1;           
       break;
       }
          a1++;
      if (p==0)
      {
        
           a[a1]=n;
       }
       
       }
     else 
     {
       p=0;
       for (j=1;j<=b1;j++)
       if (n>b[j]) 
       {
        for (k=b1;k>=j;k--)
       b[k+1]=b[k];  
       b[j]=n;
       p=1;           
       break;
       }
       b1++;
      if (p==0)
      {
           
           b[b1]=n;
       }
       
     }      
     }                
     for(i=1;i<=a1;i++) printf("%.2lf ",a[i]);
     for (i=1;i<=b1-1;i++) printf("%.2lf ",b[i]);
     printf("%.2lf",b[b1]);

    return 0;
}    
