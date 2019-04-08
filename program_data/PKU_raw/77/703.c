char kid[100];
void seek_boy(int n)
{
	int i;
	for (i=(n-1);i>=0;)
	{
		if (kid[i]=='b')
		{
			cout <<i<<" "<<n<<endl;
			kid[n]='0';
			kid[i]='0';
			i=-1;
		}
		else
		{
			i-=1;
		}
	}
}
int main()
{	
	int i=0,sum;
	char c,first;
	c=getchar();
	first=c;
	while (c!='\n')
	{
		if (c==first)
		{
			c='b';
		}
		else
		{
			c='g';
		}
		kid[i]=c;
		i+=1;
		c=getchar();
	}//??????????????????i??????
	sum=i;
	for (i=0;i<sum;i++)
	{
		if (kid[i]=='g')
		{
			seek_boy(i);
		}
	}
	return 0;
}