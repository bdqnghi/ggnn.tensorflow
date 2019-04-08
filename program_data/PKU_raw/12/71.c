int main(int argc, char* argv[])
{
	int i,j,b=0,s[100][16],t[100],k;
	for(i=0;;i++)
	{
       
		for(j=0;;j++)
		{
			scanf("%d",&s[i][j]);
			if(s[i][j]==0||s[i][j]==-1)break;
		    t[i]++;
		}
		if(s[i][j]==0) b++;
        if(s[i][j]==-1) break;
	
	}
	for(i=0;i<b;i++)
	{
		int sum=0;
		for(j=0;j<t[i];j++)
		{
			for(k=0;k<t[i];k++)
			{
				if(s[i][j]==s[i][k]*2)
					sum++;
			}
		}
	printf("%d\n",sum);
	}
	return 0;
}

