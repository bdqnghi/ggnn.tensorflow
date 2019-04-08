int main()
{
	char c[1000];
	int n,i,j=0;
	gets(c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]>='A'&&c[i]<='Z')
		{
		if(c[i]!=c[i-1]&&c[i]!=c[i-1]-32)
		{
			if(c[i-1]>='A'&&c[i-1]<='Z')
				printf("(%c,%d)",c[i-1],j);
			else if(c[i-1]>='a'&&c[i-1]<='z')
                printf("(%c,%d)",c[i-1]-32,j);
			j=0;
		}
		}
		else if(c[i]>='a'&&c[i]<='z')
		{
            if(c[i]!=c[i-1]&&c[i]!=c[i-1]+32)
			{
				if(c[i-1]>='A'&&c[i-1]<='Z')
                printf("(%c,%d)",c[i-1],j);
			else if(c[i-1]>='a'&&c[i-1]<='z')
                printf("(%c,%d)",c[i-1]-32,j);
				j=0;
			}
		}
		j++;
	}
        if(c[n-1]>='A'&&c[n-1]<='Z')
                printf("(%c,%d)",c[n-1],j);
			else if(c[n-1]>='a'&&c[n-1]<='z')
                printf("(%c,%d)",c[n-1]-32,j);
    return 0;
}