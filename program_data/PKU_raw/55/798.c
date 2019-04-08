main()
{
      int a=0,b=0,m=0,j=0,i=0,k=0,l=0,y=0;
      char n[1000],o[1000];
      for(j=0;j<=1000;j++)
      {o[j]='\0';}
      scanf("%d %s %d",&a,n,&b);
      //strlwr(n);
      for(j=0;n[j]!='\0';j++)
      if(n[j]>='A'&&n[j]<='Z')
      n[j]=n[j]-'A'+'a';
      //j=strlen(n);
      for(i=0;i<j;i++)
      {
          if(n[i]>='a'&&n[i]<='z')
          n[i]=n[i]-'a'+10;
          else if(n[i]>='0'&&n[i]<='9')
          n[i]=n[i]-'1'+1;
          }
      for(i=0;i<j;i++)
      {
          k=n[i];
          for(l=0;l<(j-i-1);l++)
          {
              k=k*a;               
          }
          m=m+k;            
      }        
      //printf("%d",m);
      do
      {
          for(y=1;o[y]!='\0';y++);
          //y=strlen(o);
          for(i=y;i!=0;i--)
          {
              o[i]=o[i-1];                
          }
          o[0]=m%b;
          if(o[0]=='\0')
          o[0]=46;
          m=(int)m/b;           
      }
      while(m!=0);
      y=strlen(o);
      for(i=0;i<y;i++)
      {
          if(o[i]>=10&&o[i]<=36)
          o[i]=o[i]-10+'A';
          else if(o[i]>=0&&o[i]<=9)
          o[i]=o[i]-1+'1';
          else if(o[i]==46)
          o[i]='0';
      }
      printf("%s",o);
      return 0;
      }
