main()
{
      char a[101];
      scanf("%s",a);
      int n=strlen(a);
      int b[101];
      for (int i=0;i<n;i++)
      b[i]=a[i]-'0';
      int s[100];
      if (n<3) printf("%d\n%d\n",atoi(a)/13,atoi(a)%13);
      else
      {
          int i=0;
          while(i<n-1)
          {
              if ((10*b[i]+b[i+1])<13) 
              {s[i]=0;
              s[i+1]=(100*b[i]+10*b[i+1]+b[i+2])/13;
              b[i+2]=(100*b[i]+10*b[i+1]+b[i+2])%13;
              i+=2;}
              else
              {s[i]=(10*b[i]+b[i+1])/13;
              b[i+1]=(10*b[i]+b[i+1])%13;
              i++;}
           }
      
       if(s[0]==0) for (int i=1;i<n-1;i++) printf("%d",s[i]);
       else for (int i=0;i<n-1;i++) printf("%d",s[i]);
       printf("\n%d",b[n-1]);
       }

}