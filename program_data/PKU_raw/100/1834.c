int main()
{
	char str[301],*p;
	scanf("%s",str);
	int m=0;
	for(p=str;*p!='\0';p++)
	{
		if((*p>=65&&*p<=90)||(*p>=97&&*p<=122))	m++;
		else continue;
	}
	if(m==0) printf("No\n");
	else
	{
		for(int i=65;i<=90;i++)
		{	
			int s=0;
			for(p=str;*p!='\0';p++)
			{		
				if(*p==i) s++;
			}
			if(s>0)  printf("%c=%d\n",i,s);
		}
		for(int j=97;j<=122;j++)
		{
			int t=0;
			for(p=str;*p!='\0';p++)
			{
				if(*p==j)  t++;
			}
			if(t>0)  printf("%c=%d\n",j,t);
		}
	}
	return 0;
}
