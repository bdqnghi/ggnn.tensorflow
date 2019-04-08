int main()
{
	int h,l,a,b,c,d,f,g,i=1,j=1;
	int m[8][8],x[8];
	scanf("%d,%d",&h,&l);
	for(a=1;a<=h;a++)
	{
		for(b=1;b<=l;b++)
		{
			scanf("%d",&m[a][b]);
		}
	}
	for(c=1;c<=h;c++)
	{
		x[c]=1;
		for(d=1;d<l;d++)
		{
			if(m[c][x[c]]<m[c][d+1])
			{
				x[c]=d+1;
			}
		}
	}
	for(f=1;f<=h;f++)
	{
		for(g=1;g<=h;g++)
		{
			if(m[f][x[f]]>m[g][x[f]])
			{
				i=0;
				break;
			}
		}
		if(i)
		{
			printf("%d+%d",f-1,x[f]-1);
			j=0;
			break;
		}
	}
	if(j)
		printf("No");
	return 0;
}

