

int main()
{
int n,i,j,sz[1000];
double result[1000]={0};

struct p{
	int a,b;
	double c;
}p[1000];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&sz[i]);
p[0].a=2;
p[0].b=1;
p[0].c=(double)p[0].a/p[0].b;
p[1].a=3;
p[1].b=2;
p[1].c=(double)p[1].a/p[1].b;
for(i=0;i<n;i++)
{
	if(sz[i]==1)
		printf("%.3lf\n",p[0].c);
	else if(sz[i]==2)
		printf("%.3lf\n",p[0].c+p[1].c);
	else
	{
		for(j=2;j<sz[i];j++)
		{
			p[j].a=p[j-1].a+p[j-2].a;
	        p[j].b=p[j-1].b+p[j-2].b;
	        p[j].c=(double)p[j].a/p[j].b;
 	        result[i]+=p[j].c;
		}
	
		printf("%.3lf\n",p[0].c+p[1].c+result[i]);
	}
}
	
	return 0;
}