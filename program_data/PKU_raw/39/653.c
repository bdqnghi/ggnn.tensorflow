struct student
{
	char a[20];
	int b;
	int c;
	char d;
	char e;
	int f;
	int g;
};
int main()
{
	struct student *s;
	int n,i,sum=0,q,max;
	scanf("%d",&n);
	s=(struct student*)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %c %c %d",s[i].a,&s[i].b,&s[i].c,&s[i].d,&s[i].e,&s[i].f);
	}
    for(i=0;i<n;i++)
	{
		s[i].g=0;
		if(s[i].b>80&&s[i].f>=1)
			s[i].g=s[i].g+8000;
		if(s[i].b>85&&s[i].c>80)
           s[i].g=s[i].g+4000;
        if(s[i].b>90)
            s[i].g=s[i].g+2000;
		if(s[i].b>85&&s[i].e=='Y')
               s[i].g=s[i].g+1000;
		if(s[i].c>80&&s[i].d=='Y')
			s[i].g=s[i].g+850;
        sum=sum+s[i].g;
	}
	max=s[0].g;
	q=0;
	for(i=0;i<n;i++)
	{
		if(max<s[i].g)
		{
           q=i;
		   max=s[i].g;
		}
	}
	printf("%s\n%d\n%d",s[q].a,s[q].g,sum);

return 0;
}