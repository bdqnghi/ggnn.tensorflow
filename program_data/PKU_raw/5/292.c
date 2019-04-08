
int main ()
{
	int i,j,k,l,w,s;
	float n,p,q,o;
	char a[10000],b[10000];
	scanf("%f",&n);
	scanf("%s",a);
	scanf("%s",b);
	i=strlen(a);
	j=strlen(b);
	w=0;
	s=0;
	for(k=0;a[k];k++)
	{if(a[k]!='A'&&a[k]!='T'&&a[k]!='G'&&a[k]!='C')
	{w++;}
	}
	for(k=0;b[k];k++)
	{if(b[k]!='A'&&b[k]!='T'&&b[k]!='G'&&b[k]!='C')
	{w++;}
	}
	if((i!=j)||w!=0)
	{printf("error");}
	else
	{
		for(l=0;a[l];l++)
	{
		if(a[l]==b[l])
		{s++;}
	}
	p=i;
	q=s;
	o=q/p;
	if(o>n)
	{printf("yes");}
	else
	{printf("no");}
	}
	return 0;
}