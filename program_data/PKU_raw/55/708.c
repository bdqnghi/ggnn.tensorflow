main()
{
      int m,n,b,d,i,j,k,l;
      char a[100],c[100],e[100];
      scanf("%d %s %d",&m,a,&n);
      b=0;
      for(i=0;a[i]!='\0';i++);
      {
      for(j=0;j<i;j++)
      {
           for(d=1,k=0;k<i-j-1;k++)
           {                
                d*=m;
           }
           if(a[j]<='9'&&a[j]>='0')
                   b+=(d*(a[j]-'0'));
           else if(a[j]<='z'&&a[j]>='a')
                   b+=(d*(a[j]-'a'+10));
           else
                   b+=(d*(a[j]-'A'+10));
      }
      }
      if(b==0)
      printf("0");
      else
      {
      for(l=0;b!=0;l++)
      {
           c[l]=b%n;
           if(c[l]>9)
              c[l]=c[l]-10+'A';
           else
           c[l]=c[l]+'0';
           b=(b/n);
      }
      c[l]='\0';
      for(i=0;i<l;i++)
      e[i]=c[l-1-i];
      e[l]='\0';
      printf("%s",e);
      getchar();
      getchar();
      }
}
             