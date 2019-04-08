int main()
{
	char a[300],b[300],c[300];
	int i,j;
	gets(a);
	gets(b);
	gets(c);
	for(i=1;a[i-1]!='\0';i++)
	{
		if(a[i-1]==b[0])
		{
			for(j=1;b[j-1]!='\0';j++)
			{
				if(a[i-1+j-1]!=b[j-1])
					break;
			}
			if(b[j-1]!='\0')
				continue;
			else
			{
				for(j=i;b[j-i]!='\0';j++)
					a[j-1]=c[j-i];
			}
			break;
		}
		else
			continue;
	}
	puts(a);
	return 0;
}

