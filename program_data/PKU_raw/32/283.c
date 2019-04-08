void main()
{
	int n,i,j,lg1,lg2,t;
	char bjs[100][100],js[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&bjs[i]);
		scanf("%s",&js[i]);
	}
	for(j=0;j<n;j++)
	{
		lg1=strlen(bjs[j]);
		lg2=strlen(js[j]);
		t=lg1-lg2;
		for(i=lg2-1;i>=0;i--)
		{
			if(bjs[j][t+i]-js[j][i]>=0)
				bjs[j][t+i]=bjs[j][t+i]-js[j][i]+48;
			else
			{
				bjs[j][t+i]=bjs[j][t+i]-js[j][i]+48+10;
				bjs[j][t+i-1]=bjs[j][t+i-1]-1;
			}
		}
		printf("%s\n",bjs[j]);
	}
}
