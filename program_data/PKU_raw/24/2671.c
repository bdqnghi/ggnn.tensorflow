int main()
{
	int n;
	char c[201][40]={0};
    scanf("%d", &n);
	int i,b[201]={0};
    for(i=0;i<n;i++)
	{
		scanf("%s", c[i]);
		getchar();
	}
	
    int num,q=0;
	int z,x=0,y=30;
    for(z=0;z<n;z++)
	{
		b[z]=strlen(c[z]);
		
	    if(b[z]>=x)
			x=b[z];
		if(b[z]<=y)
			y=b[z];
		
	}
    for(z=0;z<n;z++)
	{
		if(b[z]==x)
		{
			printf("%s\n", c[z]);
			break;
		}
	}
	for(z=0;z<n;z++)
	{
		if(b[z]==y)
		{
			printf("%s", c[z]);
			break;
		}
	}
}