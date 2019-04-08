int main()
{
    char a[100];
    char b[100];
    int n;
    scanf("%s",a);
    n=strlen(a);
    int i,j,sum,mod,k;
    if(n==1)
    {
      mod=a[0]-'0';      
     printf("0\n");     
     printf("%d\n",mod);
    }
    else
    {
    sum=(a[0]-'0')*10+a[1]-'0';
    mod=0;
    k=0;
    j=0;
    if(n==2&sum<=12)
    {
      printf("0\n");     
     printf("%d\n",sum);
     }
     else
     {
          for(i=2;i<=n;i++)
          {
                          k=mod*10+sum;
                           mod=k%13;
                           j=k/13;
                            b[i]=j+'0';
                            if(i==n)
                            break;
                           sum=a[i]-'0';
          }
          if(b[2]=='0')
          {
              for(j=0;j<=n-3;j++)
               b[j]=b[j+3];
               b[n-2]='\0';
           }
           else
           {
           for(j=0;j<=n-2;j++)
           b[j]=b[j+2];
           b[n-1]='\0';
           }
   printf("%s\n",b);     
   printf("%d\n",mod);
}
}
   getchar();
   getchar();
}
