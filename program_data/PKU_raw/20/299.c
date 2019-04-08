
void output(int len, char inp[1000])
{
	char lin1[10][10],lin2[10][3],lin3[10][13];
	int i,j=0,k=0,ma=0;
	int max[10];
	int lenm[10];
	for(i=0;i<10;i++)
		max[i]=0;
	for(i=0;i<len;i++)
	{
		if(inp[i]!=32)
		{
			if(ma==0)
			{
				lenm[k]=0;
				for(j=0;inp[i]!=32&&i<len;i++,j++)
				{
					lin1[k][j]=inp[i];
					lenm[k]++;
				}
				ma=1;continue;
			}
			if(ma==1)
			{
				for(j=0;j<3;i++,j++)
					lin2[k][j]=inp[i];
				ma=0;
				k++;
				i--;
			}

		}
	}
	for(i=0;i<k;i++) max[i]=lin1[i][0];
	for(i=0;i<k;i++)
	{
		for(j=1;j<lenm[i];j++)
			if(lin1[i][j]>max[i]) max[i]=lin1[i][j];
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<lenm[i];j++)
		{
			lin3[i][j]=lin1[i][j];
			if(lin1[i][j]==max[i])
			{
				lin3[i][j+1]=lin2[i][0];
				lin3[i][j+2]=lin2[i][1];
				lin3[i][j+3]=lin2[i][2];
				for(j=j+1;j<lenm[i];j++)
					lin3[i][j+3]=lin1[i][j];
				break;
			}
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<lenm[i]+3;j++)
			printf("%c",lin3[i][j]);
		printf("\n");
	}
}

main()
{
	int len[100],i,j;
	char inp[100][100];
	for(i=0;i<100;i++)
	{	
		gets(inp[i]);
		len[i]=strlen(inp[i]);
		if(len[i]==0) break;
	}
	j=i;
	for(i=0;i<j;i++)
		output(len[i],inp[i]);
}

