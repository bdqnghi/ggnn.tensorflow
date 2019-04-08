main()
{
      char a[MAX+1];
      int b[MAX+1],c[MAX+1];
      scanf("%s",a);
      int len=strlen(a);
      int i,p,k;
      for(i=0;i<len;i++) b[i]=a[i]-'0';
      b[i]=0;
      if(len==2&&b[0]*10+b[1]<=12)
      printf("0\n%d\n",b[0]*10+b[1]);
      else if(len==1)printf("0\n%d\n",b[0]);
      else
      {
      for(k=0;k<len-1;k++)
      //{
      //if(b[k]=='\0') 
      //{
      //p=k; 
      //break;
      //}
      //else 
      {
           int m;
           m=b[k]*10+b[k+1];
           c[k]=m/13;
           b[k+1]=m%13;
      }
      //}
      
      if(c[0]!=0)
      printf("%d",c[0]);
      for(int j=1;j<=k-1;j++) 
      {
      printf("%d",c[j]);
      }
      printf("\n");
      
      printf("%d\n",b[k]);
      }
      }
