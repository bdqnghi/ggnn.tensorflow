char kid[100];
int f(int x)
{
	if (kid[x] == 'g') return x;
	if (kid[x] == 'b') {int g = f(x+1); cout << x << " " << g << endl; return f(g+1);}
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
	f(0);
return 0;
}

