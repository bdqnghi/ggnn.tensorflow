void main()
{
   int a,b,i,j;
   char c;
   scanf("%d\n",&a);
   char n[a][32];
   int m[a];
   for(i=0;i<=32;i++)
   {
       m[i]=0;
   }
   for(i=0;i<a;i++)
   {j=0;
      while((c=getchar())!='\n')
              {
                  n[i][j++]=c;
                  m[i]=m[i]+1;
              }
   }
   for(i=0;i<a;i++)
   {
       if(n[i][m[i]-1]=='g')
       {
          n[i][m[i]-3]='\0';
          printf("%s\n",n[i]);
       }
       else
        {
          n[i][m[i]-2]='\0';
          printf("%s\n",n[i]);
       }

   }
}
