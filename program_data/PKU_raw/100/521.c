void main()
{
	char *p1,*p2,a[300],b[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int *q,c[26]={0},t=0;
	gets(a);
	for(p1=a;p1<a+strlen(a);p1++)
	{
		for(p2=b,q=c;p2<b+26;p2++,q++)
			if(*p1==*p2)
			{*q=*q+1;t=1;break;}
	}
	for(p2=b,q=c;p2<b+26;p2++,q++)
	{if(*q>0)printf("%c=%d\n",*p2,*q);}
	if(t==0)
		printf("No");
}