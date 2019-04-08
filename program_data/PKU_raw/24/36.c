
int main(int argc, char* argv[])
{
	int i,c=-1,max=1,min=10,j;
	char a[100],*p,*m,*n;
	gets(a);
	p=a;
	for(i=0;i<strlen(a);i++)
	{
		if(*(p+i)==32) 
		{
			if((i-c-1)>max) 
			{
				max=i-c-1;
				m=&a[i-1];
			}
			if((i-c-1)<min) 
			{
				min=i-c-1;
				n=&a[i-1];
			}
			c=i;
		}
	}
	if((strlen(a)-c-1)>max)
	{
		max=strlen(a)-c-1;
		m=&a[strlen(a)-1];
	}
	if((strlen(a)-c-1)<min)
	{
		min=strlen(a)-c-1;
		n=&a[strlen(a)-1];
	}
	for (j=0;j<max;j++) printf("%c",*(m-max+1+j));
	printf("\n");
	for (j=0;j<min;j++) printf("%c",*(n-min+1+j));
	return 0;
}
