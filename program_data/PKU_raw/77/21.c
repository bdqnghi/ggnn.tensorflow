void main()
{
	void pr(char *a,int n,char boy,char girl,int *k);
	char boy,girl,a[100];
	int i,b=0,g=0,k[100];
	for(i=0;;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]==a[0])b++;
		else g++;
		if(b==g)break;
	}
	boy=a[0];girl=a[b*2-1];
	for(i=0;i<100;i++)k[i]=i;
	pr(a,2*b,boy,girl,k);
}

void pr(char *a,int n,char boy,char girl,int *k)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*(a+i)==girl)
		{
			printf("%d %d\n",*(k+i-1),*(k+i));
			i--;
			break;
		}
	}
	for(;i<n-2;i++)
	{
		*(a+i)=*(a+i+2);
		*(k+i)=*(k+i+2);
	}
	if(n>3)pr(a,n-2,boy,girl,k);
}
