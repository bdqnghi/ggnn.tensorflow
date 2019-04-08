
struct ace
{
	char id[10];
	int a;
	int b;
}o[3],r;


void main()
{
	int n,i,s[3],m,j,v;
	char z[10];
	scanf("%d",&n);

	scanf("%s %d %d",o[0].id,&o[0].a,&o[0].b);
	scanf("%s %d %d",o[1].id,&o[1].a,&o[1].b);
	scanf("%s %d %d",o[2].id,&o[2].a,&o[2].b);
	s[0]=o[0].a+o[0].b;
	s[1]=o[1].a+o[1].b;
	s[2]=o[2].a+o[2].b;
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(s[i]<s[j])
			{
				strcpy(z,o[i].id);
				strcpy(o[i].id,o[j].id);
				strcpy(o[j].id,z);
				v=s[i];
				s[i]=s[j];
				s[j]=v;
			}
		}
	}
	for(i=0;i<n-3;i++)
	{
		scanf("%s %d %d",r.id,&r.a,&r.b);
        m=r.a+r.b;
		if(m>s[0] )
		{o[2]=o[1];s[2]=s[1];o[1]=o[0];s[1]=s[0];o[0]=r;s[0]=m;}
		else if(m<=s[0] && m>s[1])
		{o[2]=o[1];s[2]=s[1];o[1]=r;s[1]=m;}
		else if(m<=s[1] && m>s[2])
		{o[2]=r;s[2]=m;}
	}
	printf("%s %d\n",o[0].id,s[0]);
	printf("%s %d\n",o[1].id,s[1]);
	printf("%s %d\n",o[2].id,s[2]);




	
				
	
}
