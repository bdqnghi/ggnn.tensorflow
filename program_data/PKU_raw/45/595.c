void main()
{
	char str1[50],str2[50],*p,*q,*t;
	int m;
	scanf("%s %s",str1,str2);
	p=str1;
	q=str2;
	while(*q!='\0')
	{
		if(*q==*p)
		{	t=q;
			m=1;
			for(;*p!='\0';p++,q++)
				if(*p!=*q)
				{
					m=0;
					break;
				}
			if(m)
			{
				printf("%d\n",t-str2);
				break;
			}
			else
			{
				q++;
				p=str1;
			}
		}
		else
			q++;
	}
}


