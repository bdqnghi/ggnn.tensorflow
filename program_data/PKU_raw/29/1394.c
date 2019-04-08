

int main()
{
	int m,n;
	float a=1,b=2,c,s=0;
	scanf("%d",&m);
	float *result=(float *)malloc(sizeof(float)*m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&n);
		for(int k=0;k<n;k++)
		{
			s+=b/a;
			c=a+b;
			a=b;
			b=c;
			
		}
		result[i]=s;
		s=0;
		a=1;
		b=2;
	}
	for(int i=0;i<m;i++) printf("%.3f\n",result[i]);
	return 0;
}