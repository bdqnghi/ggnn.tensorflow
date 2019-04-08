void main()
{
	void num(char a[1000]);
	char b[1000];
	gets(b);
	num(b);
}
void num(char a[])
{
	char let;
	int d,i,c;
	for(let='a',c=0;let<='z';let++)
	{
		d=0;
		for(i=0;i<strlen(a);i++)
			if(a[i]==let)
				d++;
		if(d!=0)
		{
			printf("%c=%d\n",let,d);
			c++;
		}
	}
	if(c==0)
		printf("No");
}