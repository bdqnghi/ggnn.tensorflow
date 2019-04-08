int trans(char k)
{
	int i;
	char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	for(i=0;i<26;i++)
	{
		if(k==a[i])
			return i;
	}
}
int main()
{
	struct books
	{
		int n;
		char w[27];
	}*m;
	int num,i,j;
	scanf("%d",&num);
	m=(struct books*)malloc(sizeof(struct books)*num);
	for(i=0;i<num;i++)
	{
		
		int N;
		char W[27];
		scanf("%d %s",&N,W);
		m[i].n=N;
		strcpy(m[i].w,W);
	}
	int b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},c;
	for(i=0;i<num;i++)
	{
		for(j=0;m[i].w[j]!='\0';j++)
		{
			c=trans(m[i].w[j]);
			b[c]++;
		}
	}
	int max=0;
	char most;
	for(i=0;i<26;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
            most='A'+i;
		}
	}
	printf("%c\n%d\n",most,max);
	for(i=0;i<num;i++)
	{
		for(j=0;m[i].w[j]!='\0';j++)
		{
			if(m[i].w[j]==most)
				printf("%d\n",m[i].n);
		}
	}
	return 0;
}
