
int main(int argc, char* argv[])
{
	int a;
	int b;
	int i=1;
	int m=0,n=0;
	scanf("%d\n",&a);
	while(i<=a)
	{
		scanf("%d\n",&b);
			if(b>=m)
			{
				n=m;
				m=b;
			}
			if(b<m&&b>n)
			{
				n=b;
			}
			i++;
	}
		printf("%d\n",m);
		printf("%d\n",n);

    
	return 0;
}