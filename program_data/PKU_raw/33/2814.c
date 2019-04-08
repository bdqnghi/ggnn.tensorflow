int main()
{
	int n,jishu;
	int i,j;
	char jianji[1001];
	scanf("%d\n`", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=1000;j++)
		{
			jianji[j]=getchar();
			if(jianji[j]=='\n')
			{
				jishu=j;break;
			}
		}
		for(j=1;j<=jishu;j++)
		{
			switch(jianji[j])
			{
			case 'A':
			printf("T");break;
			case 'T':
				printf("A");break;
			case 'C':
				printf("G");break;
			case 'G':
				printf("C");break;
			default:
				printf("\n");break;
			}
		}
	}
	return 0;
}

