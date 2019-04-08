void main()
{
	char *p1,*p2,*p3,*p4,*p5;
	int n,m=0,a=0,b=10000,i;
	char s[1000];
	gets(s);
	n=strlen(s);
	s[n]=' ';
    for(p1=s;p1<(s+n+1);p1++)
	{
		if(*p1!=' ') m=m+1;
		if(*p1==' '||p1==(s+n)) 
		{
			if(m>a) {a=m;p2=p1;}
			if(m<b) {b=m;p3=p1;}
			m=0;
		}
	}
	for(p4=(p2-a);p4<p2;p4++)
	printf("%c",*p4);
	printf("\n");
	for(p5=(p3-b);p5<p3;p5++)
	printf("%c",*p5);
	
}