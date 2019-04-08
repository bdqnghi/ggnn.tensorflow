
int main()
{
	int n,i=0,k=0;
	char jianji[1000][1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",jianji[i]);
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<strlen(jianji[i]);k++)
		{
			switch(jianji[i][k]){
			case 'T':
				jianji[i][k]='A';break;
			case 'A':
				jianji[i][k]='T';break;
			case 'G':
				jianji[i][k]='C';break;
			case 'C':
				jianji[i][k]='G';break;
			default:
				jianji[i][k]=0;break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",jianji[i]);
	}
	return 0;
}