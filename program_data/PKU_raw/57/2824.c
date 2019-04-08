

int main(int argc, char* argv[])
{
	int n,i;
	char c[50][20],t[50];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%s",c[i]);
    for (i=0;i<n;i++)
	{
		t[i]=strlen(c[i])-1;
		if (c[i][t[i]]=='r')
		{
			c[i][t[i]]='\0';
			c[i][t[i]-1]='\0';
		}

        if (c[i][t[i]]=='y')
		{
			c[i][t[i]]='\0';
			c[i][t[i]-1]='\0';
		}
        if (c[i][t[i]]=='g')
		{
			c[i][t[i]]='\0';
			c[i][t[i]-1]='\0';
			c[i][t[i]-2]='\0';
		}
	}
	
	for (i=0;i<n;i++)
		printf("%s\n",c[i]);
	return 0;
}

