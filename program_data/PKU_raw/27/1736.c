
int main(int argc, char* argv[])
{
	int j,n;
	float a[1000],b[1000],c[1000];
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		scanf("%f %f %f",&a[j],&b[j],&c[j]);
	}

	for(j=1;j<=n;j++)
	{
		if(b[j]*b[j]-4*a[j]*c[j]>0)
		{
			printf("x1=%.5f;x2=%.5f\n",(float)(-b[j]+sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]),(float)(-b[j]-sqrt(b[j]*b[j]-4*a[j]*c[j]))/(2*a[j]));
		}
		if(b[j]*b[j]-4*a[j]*c[j]==0)
		{
			printf("x1=x2=%.5f\n",(float)(-b[j]/(2*a[j])));
		}
		if(b[j]*b[j]-4*a[j]*c[j]<0)
		{
			printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",(float)(-b[j]/(2*a[j])),(float)(sqrt(4*a[j]*c[j]-b[j]*b[j])/(2*a[j])),(float)(-b[j]/(2*a[j])),(float)(sqrt(4*a[j]*c[j]-b[j]*b[j])/(2*a[j])));
		}
	}
	return 0;
}