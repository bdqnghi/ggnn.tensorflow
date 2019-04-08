int main()
{
	char a[80],b[80];
	int x,y,c,d,e;
	gets(a);
	gets(b);
	x=strlen(a);
	e=0;
	for(y=0;y<x;y++)
	{
		if(a[y]<96)
		{
			c=a[y]+32;
		}
		else
		{
			c=a[y];
		}
		if(b[y]<96)
		{
			d=b[y]+32;
		}
		else
		{
			d=b[y];
		}
		if(c==d)
		{
			continue;
		}
		else if(c>d)
		{
			e++;
			printf(">\n");
			break;
		}
		else if(c<d)
		{
			e++;
			printf("<\n");
			break;
		}
	}
	if(e==0)
	{
		printf("=\n");
	}
	return 0;
}