main()
{
    char N[100];
    int a[100];
    int b=0,i,l,count=0;
    gets(N);
    l=strlen(N);
    for(i=0;i<l;i++)
    {
        N[i]=N[i]-'0';
        b=10*b+N[i];  
        a[i]=b/13;
        b=b%13;
        count++;
     }
     if(count==1 || (count==2 && a[0]==0 && a[1]==0))
     printf("0");
     else
  {
     if(a[0]!=0)
     { for(i=0;i<l;i++)
      printf("%d",a[i]);
      }
      else if(a[0]==0 && a[1]!=0)
      {
      for(i=1;i<l;i++)
      printf("%d",a[i]);
      }
       else if(a[0]==0 && a[1]==0)
      {
      for(i=2;i<l;i++)
      printf("%d",a[i]);
      }
  }
      printf("\n%d",b);
      getchar();
      getchar();
}
