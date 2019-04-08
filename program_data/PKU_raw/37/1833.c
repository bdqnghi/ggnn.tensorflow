int main()
{
	int t,cycle,i,j,l,k;
	char s[100000],c[100];
	scanf("%d",&t);
	for(cycle=1;cycle<=t;cycle++)
	{
		scanf("%s",s);
		l=strlen(s);
		memset(c,0,100*sizeof(char));
		k=0;
		for(i=0;i<=l-1;i++)
		{
			for(j=0;j<k;j++)
				if(s[i]==c[j])
					break;
			if(j<k)
			{
				continue;
			}
			else
			{
				c[k]=s[i];
				k++;
				for(j=i+1;j<=l-1;j++)
					if(s[j]==s[i])
						break;
				if(j==l)
					break;
			}
		}
		if(i<l)
			printf("%c\n",s[i]);
		else
			printf("no\n");	
	}
	return 0;
}