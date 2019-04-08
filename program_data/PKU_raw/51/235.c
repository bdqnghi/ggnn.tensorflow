int main()
{
	int n,l,i,j,m=0,k=0;
	char a[600],*p,(*s)[7],(*q)[7],b[600][7],c[600][7],(*t)[7];
	scanf("%d%s",&n,a);
	p=a;
	q=b;
	s=c;
	l=strlen(a);
	for(i=0;i<l-n+1;i++)
	{
		strncpy(*q,p,n);
	*(*q+n)='\0';
		p++;q++;
	}
	q=b;
	for(i=0;i<l-n+1;i++)
	{
		k=0;t=b;
		for(j=0;j<l-n+1;j++)
		{
			if(strcmp(*t,*q)==0)
				k++;
			t++;

		}
		if(k>m)
		{
			m=k;
			s=c;
			strcpy(*s,*q);
		}
		else if(k==m&&strcmp(*s,*q)!=0)
		{
			s++;
			strcpy(*s,*q);
		}
		q++;
	}
	l=s-c+1;
	if(m==1)
		printf("NO");
	else
	{
		printf("%d\n",m);
		s=c;
		for(i=0;i<l;i++)
		{
			k=0;
			t=c;
			for(;t<s;)
			{
				if(strcmp(*t,*s)==0)
					k++;
				t++;
			}
			if(k==0)
			puts(*s);
			s++;
		}
	}
	return 0;
}