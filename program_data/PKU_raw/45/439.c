void main()
{
	int i=0,k=1,re;
	char s[50],w[50],*p,*q;
	p=w;
	q=s;
	scanf("%s",s);
	scanf("%s",w);
	for(;*(p+i)!='\0';i++)
	{
		if(*(p+i)==*q)
		{
			re=i;
			while(*q!='\0')
			{
				if(*(p+i)!=*q)
				{
					k=0;
					break;
				}
				q++;i++;
			}
		
			if(k)
			{
				printf("%d",re);
				break;
			}
		}
	}
}

