
int main()
{
    char ch[300],c[52];
	gets(ch);
	int i,b=65;
	for(i=0;i<26;i++)
	{
		c[i]=b;
		b++;
	}
	b=97;
	for(i=26;i<52;i++)
    {
		c[i]=b;
		b++;
	}
	int a,j,count=0,k=0;
	a=strlen(ch);
    for(j=0;j<52;j++,count=0)
	{
	
		for(i=0;i<a;i++)
		{
		if(ch[i]==c[j])
		{ 
			count++;  
		k++;
		}
		}
		if(count!=0)
			printf("%c=%d\n",c[j],count);
	}	
	if(k==0)
			printf("No");
	return 0;
}
