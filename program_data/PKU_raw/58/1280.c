void main()
{
	char a[100][100000];
	int n;
	int b[100];
	int *q;
	char (*p)[100000];
    scanf("%d\n",&n);
	for(p=a;p<a+n;p++)
	{
		gets(*p);
	}
	q=b;
	for(p=a;p<a+n;p++)
	{
		char *s;
		s=*p;
		if((*s>=65&&*s<=90)||(*s>=97&&*s<=122)||(*s=='_'))
		{
			int w=0;
			for(s=*p+1;*s!=0;s++)
			{
				if((*s>=65&&*s<=90)||(*s>=97&&*s<=122)||(*s=='_')||(*s>=48&&*s<=57))
				{
					w=0;
				}
				else
				{
					w=1;
					break;
				}
			}
			if(w==0)
			{
				*q=1;
			}
			else
			{
				*q=0;
			}
		}
		else
		*q=0;
		q++;
	}
	for(q=b;q<b+n;q++)
	{
		printf("%d\n",*q);
	}
}