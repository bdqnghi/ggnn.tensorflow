int FAN(int num)
{
	int a[100000],i,wei,b,c,f=0;
	wei=log10(num)+1;
	for(i=1;i<=wei-1;i++)
	{
		b=pow(10,i);
		c=pow(10,i-1);
		a[i]=(num-num/b*b)/c;
	}
	a[i]=num/b;
	for(i=wei;i>=1;i--)
	{
		f=f+a[i]*(pow(10,wei-i));
	}
	return f;
}
int main()
{
	int N,M,i;
	for(i=1;i<=6;i++)
	{
		scanf("%d",&N);
		if(N==0)
			printf("0\n");
		else 
		{
			if(N>0)
				printf("%d\n",FAN(N));
			else	
			{
				M=-N;
				printf("-%d\n",FAN(M));
			}
		}
	}
	return 0;
}
