int main()
{
	int i,m;
	int a[5],n;
	m=0;
	while((a[m]=getchar())!='\n')
		{m++;}
	for(i=4;i>=0;i--)
	{if(a[i]>=0&&a[i]<=500)
	putchar(a[i])	;
	}
}
