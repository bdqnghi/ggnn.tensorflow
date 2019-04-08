int main()
{
	char * character,sz[81];
	int i,j,n,e;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		e=0;
		character=sz;
		gets(character);
		if(*character=='_'||(*character>=65&&*character<=90)||(*character>=97&&*character<=122))
		{
			for(; *character!='\0';++character)
			{
				if(*character=='_'||(*character>=65&&*character<=90)||
					(*character>=97&&*character<=122)||(*character>=48&&*character<=57))
					continue;
				else
				{
					printf("%d\n",0);
					e=1;
					break;
				}
			}
			if(e==0)
				printf("%d\n",1);
		}
		else
			printf("%d\n",0);
	}
	return 0;
}