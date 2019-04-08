void main()
{
	int i,k,l,n=0,a,z,A,Z,j=0,p=0;
	char s[301];
	gets(s);
	l=strlen(s);
	A=(int)'A';
	Z=(int)'Z';
	a=(int)'a';
	z=(int)'z';
	k=A;
    for(;k<Z+1;k++)
	{
	    for(i=0;i<l;i++)
		{
		     if(k==(int)s[i])
				 n++;
		}
		if(n!=0)
		{
			printf("%c=%d\n",(char)k,n);
			j++;}
		n=0;
	}
	k=a;
	for(;k<z+1;k++)
	{
	    for(i=0;i<l;i++)
		{
		     if(k==(int)s[i])
				 n++;
		}
		if(n!=0)
		{
			printf("%c=%d\n",(char)k,n);
			p++;}
		n=0;
	}
	if(j==0&&p==0)
		printf("No\n");
}

		