int main()
{
	int i,j,n,k=1;
	char name[21];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",name);
		for(j=0;name[j]!='\0';j++)
		{
			if(name[j]=='_'||(name[j]>='0'&&name[j]<='9'&&j!=0)||(name[j]>='a'&&name[j]<='z')||(name[j]>='A'&&name[j]<='Z'))
				continue;
			else 
			{
				k=0;
				break;
			}
		}	
		if (k==0)
			printf("no\n");
		else printf("yes\n");
		k=1;
	}
	return 0;
}