int main()
{
	char sz[2000];
	int b[200];
	b[0]=-1;
	int i,a,d=1,e=0,max=0,min=100,f,g,h=0,j;
	gets(sz);
	a=strlen(sz);
	for(i=0;i<a;i++)
	{
		if(sz[i]==' ' || sz[i]==',')
		{
			b[d]=i;
			e=b[d]-b[d-1]-1;
			break;
		}
	}
	for(i=0;i<a;i++)
	{
		if(sz[i]==' ' || sz[i]==',')
		{
			b[d]=i;
			if(e!=b[d]-b[d-1]-1)
			{
				h=1;
			}
			e=b[d]-b[d-1]-1;
			d++;
			if(e>max)
			{
				max=e;
				f=d-1;
			}
			if(e<min && e!=0)
			{
				min=e;
				g=d-1;
			}
		}
	}
	b[d]=i;
	if(e!=b[d]-b[d-1]-1)
	{
		h=1;
	}
	e=b[d]-b[d-1]-1;
	if(e>max)
	{
		max=e;
		f=d;
	}
	if(e<min && e!=0)
	{
		min=e;
		g=d;
	}
	if(h==0)
	{
		for(j=0;j<2;j++)
		{
			for(i=0;i<b[1];i++)
			{
				printf("%c",sz[i]);
			}
			printf("\n");
		}
	}
	else
	{
        for(i=b[f-1]+1;i<b[f];i++)
		{
		    printf("%c",sz[i]);
		} 
	    printf("\n");
	    for(i=b[g-1]+1;i<b[g];i++)
		{
		    printf("%c",sz[i]);
		} 
	    printf("\n");
	}
	return 0;
}