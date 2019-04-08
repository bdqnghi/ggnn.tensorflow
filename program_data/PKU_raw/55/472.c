int main()
{
	int a,b,i=0,c=0,d,j=0,e,f,k,x;
	char n[65],m[65]={0};
	scanf("%d %s %d",&a,n,&b);
	d=strlen(n);
	while(n[i]!='\0')
	{
		if(n[i]>='a'&&n[i]<='z')
		     n[i]=n[i]-'a'+10;
		else if(n[i]>='A'&&n[i]<='Z')
		     n[i]=n[i]-'A'+10;
		else n[i]=n[i]-'0'+0;
		i++;
	}	
	i=0;
	c=n[0];
	for(i=0;i<d-1;i++)
	c=c*a+n[i+1];
	while(c>=b)
	{
		m[j]=c%b;
		c=c/b;
		j++;
	}
	m[j]=c;
	for(k=0;k<=j;k++)
	{
		if(m[k]>9) m[k]=m[k]-10+'A';
		else if(m[k]>=0)m[k]=m[k]-0+'0';
	}
	e=strlen(m);
	f=e/2;
	for(k=0;k<=f-1;k++)
	{
		x=m[e-k-1];
		m[e-k-1]=m[k];
		m[k]=x;
	}
	printf("%s",m);
}
	
