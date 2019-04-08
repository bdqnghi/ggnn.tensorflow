void main()
{
	char a[300]={0},*p=a;
	int b[26]={0},i,count,*q;
	gets(p);
	for(p=a,count=0,q=b;*p!='\0';p++)
	{
		if(islower(*p))
		{
			count++;
			(*(q+*p-'a'))++;
		}
	}
	if(count==0)
		printf("No");
	else
	{
		for(q=b;q<b+26;q++)
		{
			if(*q>0)
				printf("%c=%d\n",(q-b+97),*q);
		}

	}
}
