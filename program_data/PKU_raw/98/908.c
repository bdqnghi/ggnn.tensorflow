int main()
{
	char str[2000][50];
	int n,i,j,sum=0,geshu,ji=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",str[i]);
	for(i=0;i<n;i++)
	{
		j=0;
		geshu=0;
		while(str[i][j]!='\0')
		{
			geshu++;
			j++;
		}
		if(ji==0) 
		{
			printf("%s",str[i]);
		    sum=sum+geshu;
		}
		else
		{
			sum=sum+geshu+1;
			if(sum<=80)
				printf(" %s",str[i]);
			else
			{
				printf("\n%s",str[i]);
				sum=geshu;
			}
		}
		ji=1;
	}
	
	return 0;
}
		
