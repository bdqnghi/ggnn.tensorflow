main()
{
      char a[100][102];
      int i,j,sum=0,n,flag=0;
      for(i=0;i<100;i++)
      for(j=0;j<102;j++)
      a[i][j]='\0';
      
      char b[102];
      gets(b);
      for(i=0;;i++)
      {
      for(j=0;;j++)
      {
      if(b[sum+j]=='\0')
      {
      flag=1;
      break;
      }
      else if(b[sum+j]!=' ')
      {
      a[i][j]=b[sum+j];
      }
      else
      {
      sum=sum+j+1;
      break;
      }
      }
      if(flag==1)
      break;
      }
      n=i;
      for(i=n;i>=0;i--)
      {if(i==0)
      printf("%s",a[i]);
      else
      printf("%s ",a[i]);

      }
      }
      
      
      
