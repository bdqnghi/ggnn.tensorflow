struct children{
	char sex;
	int num;
};
int main()
{
	char line[100];
	int n,m;
	int i,j,k;
	struct children pig[100];
	scanf("%s",line);
	n=strlen(line);
	for(i=1;i<n-1;i++)
	{
		if(line[i]==line[0])
			line[i]='(';
		else
			line[i]=')';
	}
	line[0]='(';
	line[n-1]=')';
	for(i=0;i<n;i++)
	{
		pig[i].num=i;
		pig[i].sex=line[i];
	}
	m=n;
	for(i=0;i<(n/2-1);i++)
	{
		for(j=0;j<m;j++)
		{
			if(pig[j].sex=='('&&pig[j+1].sex==')')
			{
				printf("%d %d\n",pig[j].num,pig[j+1].num);
				k=j;
				for(j;pig[m-3].num!=n-1;j++)
				{
					pig[j]=pig[j+2];
				}
				m-=2;
				break;
			}
		}
	}
	printf("%d %d\n",0,n-1);
	return 0;
}