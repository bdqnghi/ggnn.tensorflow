struct point{
	int a;
	int b;
	int c;
}p[10];
struct dis{
	double d;
	int i;
	int j;
}di[60],x;
int main()
{int k,m,q,n,y;
double z;
scanf("%d",&n);
for(k=0;k<n;k++)
	scanf("%d%d%d",&p[k].a,&p[k].b,&p[k].c);

k=0;
for(m=0;m<n;m++)
{q=m+1;
for(;q<n;q++)
{z=((double)p[q].a-(double)p[m].a)*((double)p[q].a-(double)p[m].a)+((double)p[q].b-(double)p[m].b)*((double)p[q].b-(double)p[m].b)+((double)p[q].c-(double)p[m].c)*((double)p[q].c-(double)p[m].c);

di[k].d=(double)sqrt((double)z);
di[k].i=m;
di[k].j=q;
k=k+1;}}
for(y=0;y<n*(n-1)/2-1;y++)
{for(k=0;k<n*(n-1)/2;k++){if(di[k+1].d>di[k].d)
{x=di[k];
di[k]=di[k+1];
di[k+1]=x;}}}
for(k=0;k<n*(n-1)/2;k++)
{printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",p[di[k].i].a,p[di[k].i].b,p[di[k].i].c,p[di[k].j].a,p[di[k].j].b,p[di[k].j].c,di[k].d);}
}
