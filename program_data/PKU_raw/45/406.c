void main()
{
	char c[1000];
	int i,k=-1,n;
	char *q,*p1,*p2,*p3;
	gets(c);
	n=strlen(c);
	p1=c;
	for(i=0;i<n;i++,p1++)
		if(c[i]==' ')
		{q=p1;break;}
	p1=c;
	p2=q+1;
	for(;*p2!='\0';p2++)
	{k++;	
	if(*p2==*p1)
			for(p3=p2;p1<q;p1++,p3++)
		    if(*p1!=*p3)
			{p1=c;break;}
			else if(p1==q-1)
			printf("%d\n",k);
	
	}
}
		    