int strchange(char s[],int n[])
{
      int i;
      for(i=0;i<strlen(s);i++) n[i]=s[i]-'0';
      return(strlen(s));
}
main ()
{
     int a[101],b[101],c[101],i,j,n,yushu,wei,x,y;
     char s[101];
     for(i=0;i<101;i++) {a[i]=0;b[i]=0;c[i]=0;s[i]='\0';}
     scanf("%s",s);
     n=strchange(s,a);
     if(n==1) printf("%d\n%d",0,a[0]);
     else if(n==2 && a[0]*10+a[1]<13) printf("%d\n%d%d",0,a[0],a[1]);
     else
     {
         x=a[0];y=a[1];
     for(i=0;i<n-1;i++)
     {
          b[i]=(a[i]*10+a[i+1])/13;
          yushu=(a[i]*10+a[i+1])%13;
          a[i+1]=yushu;
     }
     if((x*10+y)>=13) for(i=0;i<n-1;i++) printf("%d",b[i]);
     else for(i=1;i<n-1;i++) printf("%d",b[i]);
     printf("\n%d",yushu);
     }
}