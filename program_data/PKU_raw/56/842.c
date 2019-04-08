void main()
{
   int i=0,j;
   char a[5];
   while(1)
   {
	   scanf("%c",&a[i]);
	   if (a[i]=='\n') break;
	   i=i+1;
   }
   for(j=(i-1);j>=0;j--)
	   printf("%c",a[j]);

}