int main()
{
	char str[301],s[60]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",*ps,*pt;
	int count=0,t;
	scanf("%s",str);
	for(ps=s;*ps!='\0';ps++)
	{
		t=0;
		for(pt=str;*pt!='\0';pt++)
		{
			if(*pt==*ps)
			{
				t++;
			    count++;
			}
		}
		if(t>0)
			printf("%c=%d\n",*ps,t);
	}
	if(count==0)
		printf("No");

	return 0;
}