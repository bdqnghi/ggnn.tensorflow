int main()
{
	int m,i;
int n,j;
float x,s;
scanf("%d",&m);

for(i=0;i<m;i++)
{
	scanf("%d",&n);
	for(s=0,j=0,x=2.0f;j<n;j++)
	{
		s=s+x;
			x=1+1/x;
	}
	printf("%.3f\n",s);	
}
}