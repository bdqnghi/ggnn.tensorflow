

int main(int argc, char* argv[])
{
	char str[1];
	int m[300], a, b, c, d;
	a=0;
	b=0;
	while(a==0)
	{
		scanf("%d",&m[b]);
		scanf("%c",&str[0]);
		if(str[0]=='\n')
		{
			a=1;
			b++;
		}
		else
		{
			b++;
		}
	}

	for(a=0;a<b;a++)
	{
		for(c=1;c<b;c++)
		{
			if(m[c-1]<m[c])
			{
				d=m[c-1];
				m[c-1]=m[c];
				m[c]=d;
			}
		}
	}
	c=0;

	for(a=1;a<b;a++)
	{
		if(m[a]==m[a-1])
		{
		}
		else
		{
			printf("%d",m[a]);
				a=b;
				c=1;
		}
	}
	if(c==0)
		printf("No");

	return 0;
}

