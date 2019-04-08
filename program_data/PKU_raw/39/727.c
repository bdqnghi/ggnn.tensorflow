struct stu
{
   char x[20];
   int a;
   int b;
   char c[2];
   char d[2];
   int e;
   int t;
};
int main()
{
	int n,i,m;
	struct stu h[100]={0};
    scanf("%d",&n);
	for(i=0,m=0;i<=(n-1);i++)
	{
		scanf("%s%d%d%s%s%d",&h[i].x,&h[i].a,&h[i].b,&h[i].c,&h[i].d,&h[i].e);
		if(h[i].a>80&&h[i].e>=1)
			h[i].t+=8000;
		if(h[i].a>85&&h[i].b>80)
			h[i].t+=4000;
		if(h[i].a>90)
			h[i].t+=2000;
		if(h[i].a>85&&strcmp(h[i].d,"Y")==0)
			h[i].t+=1000;
		if(h[i].b>80&&strcmp(h[i].c,"Y")==0)
			h[i].t+=850;
		m+=h[i].t;
	}
	for(i=0;i<=(n-1);i++)
	{
		if(h[i].t>=h[i+1].t)
			h[i+1]=h[i];
	}
	printf("%s\n%d\n%d",h[n-1].x,h[n-1].t,m);
}