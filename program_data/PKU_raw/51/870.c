
int main()
{
	int n,i,j,l,count[400]={0},s,state,high[200],max=0;
	char input[550]={0},compare[400][7]={0},tem[7]={0};
	scanf("%d",&n);
	scanf("%s",input);
	l=strlen(input);
	for(j=0;j<n;j++)
	{
		compare[0][j]=input[j];
		count[0]=1;
		s=1;
	}
	for(i=1;i<l-n+1;i++)
	{
		state=0;
		for(j=0;j<n;j++)
		{
			tem[j]=input[i+j];
		}
		for(j=0;j<s;j++)
		{
			if (!strcmp(tem,compare[j]))
			{
				count[j]++;
				state=1;
				break;
			}
		}
		if (state==0)
		{
			for(j=0;j<n;j++)
			{
				compare[s][j]=input[i+j];
				count[s]=1;
			}
			s++;
		}
	}
	for(i=0;i<s;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
			memset(high,0,sizeof(high));
			high[0]=i;
			j=1;
		}
		else if(count[i]==max)
		{
			high[j]=i;
			j++;
		}
	}
	if (max==1) {printf("NO\n");return 0;}
	printf("%d\n",max);
	for(i=0;i<j;i++)
	{
		printf("%s\n",compare[high[i]]);
	}
}

