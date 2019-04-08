main()
{
      int a,b,i,sum=0,m,k,l;
      char c[40];
      scanf("%d %s %d",&a,c,&b);
      m=strlen (c);
                for(i=0;i<m;i++)
      {
                if (c[i]>='a')
                c[i]=c[i]+'A'-'a';
                if(c[i]>='A')
                sum=(c[i]+10-'A')+sum*a;
                else if(c[i]<='9')
                sum=(c[i]-'0')+sum*a;          
      }
      
      
      char d[40]={0};
      l=sum;
      for(i=0;;i++)
      {
      k=l%b;
      l=l/b;
      if(k<=9)
      d[i]=k+'0';
      else
      d[i]=k-10+'A';
      
      m=i+1;
      if (l==0) break;
      }
      
      char e[m];
      for(i=0;i<=m-1;i++)
      {
      e[m-1-i]=d[i];
      }
      e[m]='\0';
      puts(e);
   
      
} 


