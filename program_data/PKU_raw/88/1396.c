void main()
{
	void anaylse(char c[]);
	char c[31];
	gets(c);
	anaylse(c);
}
void anaylse(char c[])
{
	int i;
	for(i=0;i<31;i++)
	{
		if(*(c+i)>47&&*(c+i)<58&&*(c+i+1)>47&&*(c+i+1)<58)
			printf("%c",*(c+i));
		if(*(c+i)>47&&*(c+i)<58&&(*(c+i+1)<=47||*(c+i+1)>=58))
			printf("%c\n",*(c+i));
	}
}


