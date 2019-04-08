void main()
{
	int a,b;
	long n=0;
	char na[40],nb[40];
	scanf("%d%s%d",&a,na,&b);
	int la;
	la=strlen(na);
	int i,j,s,y;
	for(i=0;i<la;i++)
		if(na[i]-'0'<10) n=a*n+na[i]-'0';
		else if((na[i]-'A'>=0)&&(na[i]-'A'<26)) n=a*n+na[i]-'A'+10;
		else n=a*n+na[i]-'a'+10;
	s=n;
	if(s==0) i=1;
	else
	{for(i=1;s>0;i++)
		s=s/b;
	i--;}
	for(j=1;j<=i;j++)
	{
	y=n%b;
	n=n/b;
	if(y<10) nb[i-j]=y+'0';
	else nb[i-j]=y-10+'A';}
	nb[i]=0;
	puts(nb);
}