void back(char a[])
{
     int l,i;
     char b[1001];
     l=strlen(a);
     for(i=0;i<l;i++)
     {
                     b[i]=a[l-i-1];
     }
     b[l]='\0';
     strcpy(a,b);
}
void full(char a[])
{
     int l,i;
     l=strlen(a);
     for(i=l;i<1000;i++)
     {
                         a[i]='0';
     }
     a[1000]='\0';
}
void recur(char a[])
{
     int i;
     for(i=999;i>=0;i--)
     {
                        if(a[i]!='0')
                        {
                                     a[i+1]=0;
                                     break;
                        }
     }
     back(a);
}
void plus(char a[],char b[],char sum[])
{
      int i;
      back(a);
      back(b);
      full(a);
      full(b);
      for(i=0;i<1000;i++)
      {
                          if(a[i]>'9')
                          {a[i]=a[i]-10;a[i+1]=a[i+1]+1;}
                          if((a[i]+b[i]-2*'0')>9)
                          {sum[i]=a[i]+b[i]-'0'-10;a[i+1]=a[i+1]+1;}
                          else
                          {sum[i]=a[i]+b[i]-'0';}
      }
      recur(b);
      recur(sum);
}
void minus(char a[],char b[],char difference[])
{
     int i,w=0;
     back(a);
     back(b);
     full(a);
     full(b);
     for(i=0;i<1000;i++)
     {
                       if(w==1)
                       a[i]=a[i]-1;
                       if(a[i]<b[i])
                       {
                                    difference[i]=a[i]+10-b[i]+'0';
                                    w=1;
                       }
                       else
                       {
                           difference[i]=a[i]-b[i]+'0';
                           w=0;
                       }
     }
     for(i=999;difference[i]=='0';i--);
     if(i>=0)
     difference[i+1]='\0';
     else
     difference[1]='\0';
     back(difference);
}
main()
{
      char a[1001],b[1001],sum[1001];
      scanf("%s %s",a,b);
      if(a[0]=='0'&&a[1]==0&&b[0]=='0'&&b[1]==0)
      printf("0");
      else
      {
          plus(a,b,sum);
          puts(sum);
      }
      getchar();
      getchar();
}