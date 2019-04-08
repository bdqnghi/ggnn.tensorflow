void main()
{
	int count[128]={0},i,c,b=0;
	c=getchar();
	while(c!='\n')
	{
		count[c]++;
		c=getchar();
	}
	for(i='A';i<='Z';i++)
	if(count[i])
	{
		printf("%c=%d\n",i,count[i]);
		b=1;
	}
	for(i='a';i<='z';i++)
	if(count[i])
	{
		printf("%c=%d\n",i,count[i]);
		b=1;
	}
	if(!b) printf("No");
}