void paixu(char a[])
{
	int i,j;
	char b;
	for(i=0;i<strlen(a)-1;i++)
	{
		for(j=0;j<strlen(a)-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				b=a[j];
		     	a[j]=a[j+1];
		    	a[j+1]=b;
			}
		}
	}
}
void main()
{
	char a[100],b[100];
	scanf("%s%s",a,b);
	paixu(a);
	paixu(b);
	if(strcmp(a,b)==0)
		printf("YES");
	else 
		printf("NO");
}