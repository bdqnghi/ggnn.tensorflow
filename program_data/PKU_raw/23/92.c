main()
{
   int i=0,j,m=0,k,l=0;
   char str[100][100]={'\0'};   /*???]={'\0'}*/
   char a[100];
   gets(a);
   k=strlen(a);
   for(i=0;i<k;i++)
       if(a[i]==' '&&a[i+1]!=' ')
	 l++;
   l=l+1;
   i=0;                        /*???i=0;*/
   for(j=0;j<k;j++)
   {
       if(a[j]!=' ')
       {
          str[i][m]=a[j];
          m++;
       }
       if(a[j]==' '&&a[j+1]!=' ')
       {
          i++;
          m=0;
       }
   }
   for(j=0;j<l-1;j++)
   printf("%s ",str[l-j-1]);
   printf("%s",str[0]);
}