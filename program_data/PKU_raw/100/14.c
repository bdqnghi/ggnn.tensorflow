void main()
{
	char a[300];
	int sum,i,j,k=1;
	gets(a);
	for(j='a';j<='z';j++)
	{
		sum=0;
		for(i=0;i<strlen(a);i++)
			if(a[i]==j) sum++;
		if(sum)
		{
			printf("%c=%d\n",j,sum);
			k=0;
		}
	}
	if(k) printf("No");
}