main()
{
  int a,n,b,i,j;
  int l;
  int sum=0;
  char c[40];
  int d[40];
  char e[40];
  char f[40];
  scanf("%d %s %d",&a,c,&b);
  l=strlen(c);
  if(c[0]=='0')
   printf("0");
  else
  {
      for(i=0;i<l;i++)
       {
         if(c[i]>='A'&&c[i]<='Z')
           c[i]=c[i]-'A'+'a';}
      for(i=0;i<l;i++)
       {
         if(c[i]>='a')
           d[i]=c[i]-'a'+10;
         else
           d[i]=c[i]-'0'; 
         sum=sum*a+d[i];
       }  
       for(i=0;sum!=0;i++)
        {
        e[i]=sum%b;
        sum=sum/b;
        if(e[i]>9)
        e[i]=e[i]-10+'A';
        else
        e[i]=e[i]+'0';
        }
        for(j=0;j<=i;j++)
         f[j]=e[i-j-1];
         f[i]='\0';
         printf("%s",f);
         getchar();
         getchar();
         }
}
        
        
        