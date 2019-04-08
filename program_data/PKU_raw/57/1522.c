int main()
{
   int n;int i,j,k;
   scanf("%d\n",&n);
   char a[50],b[50];
   for(i=0;i<n;i++)
   {
   	scanf("%s\n",&a);
    k=strlen(a);
    char *c,*d;
    c=a+k-2;d=a+k-3;
    if(strcmp(c,"er")==0)
    {
    	for(j=0;j<k-2;j++)
    	{
    		b[j]=a[j];
    	}
    	b[j]='\0';
    	printf("%s\n",b);
    }
    else if(strcmp(c,"ly")==0)
    {
    	for(j=0;j<k-2;j++)
    	{
    		b[j]=a[j];
    	}
    	b[j]='\0';
    	printf("%s\n",b);
    }
    else if(strcmp(d,"ing")==0)
    {
    	for(j=0;j<k-3;j++)
    	{
    		b[j]=a[j];
    	}
    	b[j]='\0';
    	printf("%s\n",b);
    }
   }
   return 0;   
}
