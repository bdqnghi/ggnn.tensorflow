int main()
{
	int N,i,l1,l2,loop,t,s;
	char n1[410],n2[410];
	int a[410],b[410],c[410];
	int num(char c);
	scanf("%d",&N);
	for(loop=1;loop<=N;loop++)
	{
		scanf("%s",n1);
		scanf("%s",n2);
		memset(a,0,410*sizeof(int));
		memset(b,0,410*sizeof(int));
		t=0;
		s=0;
		l1=strlen(n1);
		l2=strlen(n2);
		for(i=0;i<=l1-1;i++)
			a[i]=num(n1[l1-1-i]);
		for(i=0;i<=l2-1;i++)
			b[i]=num(n2[l2-1-i]);
		for(i=0;i<410;i++)
			if(a[i]-b[i]-t>=0)
			{
				c[i]=a[i]-b[i]-t;
				t=0;
			}
			else
			{
				c[i]=a[i]-b[i]-t+10;
				t=1;
			}
		for(i=409;i>=0;i--)
		{
			if(c[i]!=0)
				s=1;
			if(s==1)
				printf("%d",c[i]);
		}
		if(s==0)
			printf("0");
		printf("\n");
	}
	return 0;
}

int num(char c)
{
	return c-'0';
}