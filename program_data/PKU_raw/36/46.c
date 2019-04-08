int main()
{
	char a[20],b[20],*p1,*p2;
	int i=0;
	scanf("%s%s",a,b);
	if(strlen(a)!=strlen(b))
		printf("NO");
	else
	{
        for(p1=a;p1<a+strlen(a);p1++)
		    for(p2=b;p2<b+strlen(b);p2++)
				if(*p1==*p2)
					*p1=*p2='0';
		for(p1=a;p1<a+strlen(a);p1++)
			if(*p1=='0')
				i++;
		if(i==strlen(a))
			printf("YES");
		else
			printf("NO");
	}
	return 0;
}

