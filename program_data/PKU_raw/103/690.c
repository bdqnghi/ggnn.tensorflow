int main()
{
	char m[1000];
	int n,i,j=1;
	gets(m);
	n=strlen(m);
	for(i=1;i<n;i++)
	{
		if(m[i]>='A'&&m[i]<='Z')
		{
			if(m[i]!=m[i-1]&&m[i]!=m[i-1]-32)
			{
				if(m[i-1]>='A'&&m[i-1]<='Z')
					printf("(%c,%d)",m[i-1],j);
				else if(m[i-1]>='a'&&m[i-1]<='z')
					printf("(%c,%d)",m[i-1]-32,j);
				j=0;
			}
		}
		else if(m[i]>='a'&&m[i]<='z')
		{
			if(m[i]!=m[i-1]&&m[i]!=m[i-1]+32)
			{
				if(m[i-1]>='A'&&m[i-1]<='Z')
					printf("(%c,%d)",m[i-1],j);
				else if(m[i-1]>='a'&&m[i-1]<='z')
					printf("(%c,%d)",m[i-1]-32,j);
				j=0;
			}
		}
		j=j+1;
	}
	if(m[n-1]>='A'&&m[n-1]<='Z')
		printf("(%c,%d)",m[n-1],j);
	else
		printf("(%c,%d)",m[n-1]-32,j);
	return 0;
}
			



