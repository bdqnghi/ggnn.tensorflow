
int main(int argc, char* argv[])
{
	char p[100][20];
	int n,i,j;
         int k=1,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	
		scanf("%s",p[i]);
	
	for(i=0;i<n;i++)
	{
		{
			if((p[i][0]>='A'&&p[i][0]<='Z')||(p[i][0]>='a'&&p[i][0]<='z')||p[i][0]=='_')
		{
			for(j=1;p[i][j]!='\0';j++)
			{
			
				if((p[i][j]>='A'&&p[i][j]<='Z')||(p[i][j]>='a'&&p[i][j]<='z')||p[i][j]=='_'||(p[i][j]>='0'&&p[i][j]<='9'))
					k=k+1;
			}
		}
		}
		c=strlen(p[i]);
		if(k==c)
			printf("yes\n");
		else
		printf("no\n");
		k=1;

	}
	return 0;
}
