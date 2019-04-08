
void main()
{
	char str[100];
	char *p=str,*a[100];
	int i,j,k;
	gets(p);
	for(i=0,j=1;*(p+i)!='\0';i++)
	{
		if(*(p+i)==' ')
		{	a[j]=p+(i+1);
		    *(p+i)='\0';
		    j++;
		}
		a[0]=p+0;
	}
	for(k=j-1;k>0;k--)
		printf("%s ",a[k]);
	printf("%s",a[0]);
	
}