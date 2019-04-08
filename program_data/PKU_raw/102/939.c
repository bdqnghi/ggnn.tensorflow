int main()
{
int n,i,j;
scanf("%d",&n);
double c;
double m[41],f[41];
char a[41][7];
int e,d;
e=0;
d=0;
for(i=0;i<n;i++)
{
	scanf ("%s",&a[i]);
	if(a[i][0]=='m')
	{

		scanf("%lf",&m[e]);
	e++;
	}
	else if(a[i][0]=='f')
	{
		scanf("%lf",&f[d]);
		d++;
	}
}

for(j=0;j<n;j++)
{
	for(i=0;i<e-1;i++)
	{
		if(m[i]>m[i+1])
		{
		c=m[i];
		m[i]=m[i+1];
		m[i+1]=c;
		}
	}
}

for(j=0;j<n;j++)
{
	for(i=0;i<d-1;i++)
	{
		if(f[i]<f[i+1])
		{
			c=f[i];
		f[i]=f[i+1];
		f[i+1]=c;
		}
	}
}

for(i=0;i<e;i++)
{
	if(m[i]!=0)
	{
		printf("%.2lf ",m[i]);
	}
}

for(i=0;i<d-1;i++)
{
	if(f[i]!=0)
	{
		printf("%.2lf ",f[i]);
	}
}printf("%.2lf",f[d-1]);
return 0;
}