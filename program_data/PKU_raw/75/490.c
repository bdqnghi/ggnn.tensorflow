
int t[1005];
int in[1000];
int out[1000];
void main()
{
	char buf[4000], *p;
	int count;
	int i,j;
	int max=0;

	memset(t, 0, sizeof(t));

	fgets(buf, sizeof(buf), stdin);
	i=0;
	p = strtok(buf, ",");
	for (; p; p=strtok(NULL, ","))
	{
		in[i++] = atoi(p);
	}
	count = i;

	fgets(buf, sizeof(buf), stdin);
	i=0;
	p = strtok(buf, ",");
	for (; p; p=strtok(NULL, ","))
	{
		out[i++] = atoi(p);
	}

	for (i=0; i<count; i++)
	{
		int s=in[i];
		int e=out[i];
		for(j=s; j<e; j++)
		{
			t[j] ++;
			if (max<t[j])
				max=t[j];
		}
	}
	
	printf("%d %d\n",count, max);
}
