int main()
{
	char a[200],b[200],c[200];
	int n,i,max,min;
    scanf("%d",&n);
	scanf("%s",a);
		strcpy(b,a);
		strcpy(c,a);
	for(i=0;i<n-1;i++)
	{
	  scanf("%s",a);
	  if(strlen(a)>strlen(b))
		  strcpy(b,a);
	  if(strlen(a)<strlen(c))
		  strcpy(c,a);
	}
    printf("%s\n",b);
	printf("%s\n",c);
	return 0;
}