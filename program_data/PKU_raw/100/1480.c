void main()
{
	char s[300];
	int i,j,q,h=0,k;
	gets(s);
	for(i=65;i<=122;i++)
	{
		k=0;
		if(i<=90)
		{
		for(j=0;s[j]!=0;j++)
		{
			if(s[j]==i)k++;
		}
		}
		if(i==91)i=96;
		if(i>=97)
		{
             for(q=0;s[q]!=0;q++)
			 {
			   if(s[q]==i)k++;
			 }
		}
			if(k!=0)
			{
				printf("%c=%d\n",i,k);h++;
			}
	}
	if(h==0)printf("No");
}
	
