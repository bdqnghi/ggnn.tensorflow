main()
{
      int a,b,i,x,j,l,y;
      char c[1000];
      char f[1000];
      int e[1000];
      scanf("%d %s %d",&a,c,&b);
      l=strlen(c);
      x=0;
      int d[l];
          for(i=0;i<l;i++)
          {
              if(c[i]<='Z'&&c[i]>='A')
              d[i]=c[i]-'A'+10;
             else if(c[i]<='z'&&c[i]>='a')
              d[i]=c[i]-'a'+10;
              else
              d[i]=c[i]-'0';
              x=d[i]+x*a;
              }
              if(x==0)
    printf("%d",0);
          for(j=0;x!=0;j++)
          {
              e[j]=x%b;
              x=x/b;
          }
  e[j]=0;
          for(y=0;y<j;y++)
          {
              if(e[y]<=9)
              f[j-1-y]='0'+e[y];
              else
              f[j-1-y]=e[y]-10+'A';
          f[j]='\0';
          }
          
      printf("%s",f);
      printf("\n");

      getchar();
      getchar();
}
      
      
