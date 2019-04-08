double fun(int m)
{
int g;
double sum=0.0;
int k[1000];
int p[1000];k[0]=2;p[0]=1;
for(g=1;g<1000;g++)
{
k[g]=k[g-1]+p[g-1];

p[g]=k[g-1];
}
for(g=0;g<m;g++)
{
sum+=1.0*k[g]/p[g];

}
return sum;
}



int main()
{
	int n,i,j,k;
double x,e,f;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&j);
printf("%.3lf\n",fun(j));
}

	return 0;
}
