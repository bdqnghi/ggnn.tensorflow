void main()
{
	int a=0,b=0,c=0,d=0,n=0,k=0,i=0;

	struct man
	{
		int number;
		char name[10];
	}m[100],p[100],s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s %d",m[i].name,&m[i].number);
	for(i=0;i<n;i++)
		if(m[i].number>=60)
		{
			p[k]=m[i];
			k++;
		}
    for(a=k-1;a>0;a--)
	{
		for(b=0;b<a;b++)
			if(p[b].number<p[b+1].number)
			{	s=p[b+1];
			   p[b+1]=p[b];
			   p[b]=s;}
	}
	for(i=0;i<n;i++)
		if(m[i].number<60)
		{
			p[k]=m[i];
			k++;
		}
	for(i=0;i<k;i++)
		printf("%s\n",p[i].name);
}