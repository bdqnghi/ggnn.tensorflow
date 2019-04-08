void main()
{
	int i,j,n,len;
	char w[50][15]={'c'},W[50]={'c'};
	scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		gets(W);
		len=strlen(W);
		if(W[len-2]=='e'&&W[len-1]=='r')len-=2;
		else if(W[len-2]=='l'&&W[len-1]=='y')len-=2;
		else if(W[len-3]=='i'&&W[len-2]=='n'&&W[len-1]=='g')len-=3;
		for(j=0;j<len;j++)
			w[i][j]=W[j];
	}
	for(i=1;i<n+1;i++)
	{
		j=0;
		while(w[i][j]!=0)
		{
			printf("%c",w[i][j]);
			j++;
		}
		if(w[i][j]==0)printf("\n");
	}
}