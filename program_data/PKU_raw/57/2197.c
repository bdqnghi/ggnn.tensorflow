void main()
{
   int n,i,j,a[100];
   char str[100][100];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	   scanf("%s",str[i]);
	   a[i]=strlen(str[i]);
   }
   for(i=0;i<n;i++)
   {
	   if(str[i][a[i]-1]=='r'||str[i][a[i]-1]=='y')
	   {
		   for(j=0;j<a[i]-2;j++)
		   {
			   printf("%c",str[i][j]);
		   }
		   printf("\n");
	   }
	   if(str[i][a[i]-1]=='g')
	   {
           for(j=0;j<a[i]-3;j++)
		   {
			   printf("%c",str[i][j]);
		   }
		   printf("\n");
	   }
   }
}
