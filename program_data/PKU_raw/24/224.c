void main()
{
 char c,t[200],s[51][200];
 int i,j,n=0;
 scanf("%c",&c);
 while (c!='\n')
   {
   n=n+1;s[n][0]=c;i=0;
   scanf("%c",&c);
   while ((c!=' ')&&(c!='\n'))
     {
     i=i+1;s[n][i]=c;scanf("%c",&c);
     }
   s[n][i+1]='\0';
   if (c!='\n') scanf("%c",&c);
   }
 for (i=1;i<=n-1;i++)
   for (j=i+1;j<=n;j++)
     if (strlen(s[i])<=strlen(s[j]))
       {
       strcpy(t,s[i]);
       strcpy(s[i],s[j]);
       strcpy(s[j],t);
       }
 printf("%s\n%s\n",s[1],s[n]);
}
