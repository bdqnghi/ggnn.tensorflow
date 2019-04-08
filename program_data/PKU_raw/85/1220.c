int main()
{
	char sz[50];
	int n;
	scanf("%d",&n);
	int count,x;
	for(int j=1;j<=n;j++)
	{
		count=0;
		x=0;
		scanf("%s",sz);
		for(int i=0;sz[i]!='\0';i++)
		{
			x++;
			if(sz[0]=='_'||(sz[0]>='a'&&sz[0]<='z')||(sz[0]>='A'&&sz[0]<='Z'))
			{
				if(sz[i]>='0'&&sz[i]<='9')
					count++;
			    if(sz[i]>='a'&&sz[i]<='z')
				    count++;
			    if(sz[i]>='A'&&sz[i]<='Z')
				    count++;
			    if(sz[i]=='_')
				    count++;
			}
		}
		if(count==x){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	return 0;
}