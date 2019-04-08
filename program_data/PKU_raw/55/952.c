main()
{
     int a,b,l,i,m,j,s;
     char n[100];
     scanf("%d %s %d",&a,&n,&b);
     l=strlen(n);
     for(i=0;i<=l-1;i++)
       {
        if(n[i]>='A'&&n[i]<='Z')
           n[i]=n[i]-'A'+10;
        else if(n[i]>='a')
           n[i]=n[i]-'a'+10;
        else
           n[i]=n[i]-'0';
       }                                     
     s=0;
     for(i=l-1;i>=0;i--)
       {
        m=n[i];
        for(j=0;j<l-i-1;j++)
          {
           m*=a;
          }
        s+=m;
       }                                         
     i=0;
     int x[100];
     int y[100];
     for(s=s;s>=b;s=s/b)
       {
        x[i]=s%b;
        i++;
       }
     x[i]=s;
     for(j=0;j<=i;j++)
       {
        y[j]=x[i-j];
       }
     for(j=0;j<=i;j++)
       {
        if(y[j]<=9&&y[j]>=0)
          {
            n[j]=y[j]+48;
          }
        else
          n[j]=y[j]+55;
     }
     n[j]='\0';
     puts(n);     
}
