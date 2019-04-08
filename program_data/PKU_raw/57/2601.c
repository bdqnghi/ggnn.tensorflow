const int M = 50;

int main(int argc, char* argv[])
{
	char s[100];
	char s3[4];
	char _s[4] = {'i','n','g','\0'};
	int n,i,j,t;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",&s);
		j = strlen(s);
		t = 0;
		s3[0] = s[j-3];
		s3[1] = s[j-2];
		s3[2] = s[j-1];
		s3[3] = '\0';
		
		if(!strcmp(_s,s3))
		{
			for(i = 0;i < j-3;i++)
			{
				printf("%c",s[i]);
			}
			printf("\n");
		}
		else
		{
			for(i = 0;i < j-2;i++)
			{
				printf("%c",s[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
