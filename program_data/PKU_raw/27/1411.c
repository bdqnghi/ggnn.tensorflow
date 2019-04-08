
int main()
{
	int n,i;
	double x1[100],x2[100],num1[100],num2[100],num3[100];
	float a[100],b[100],c[100];
	scanf ("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f %f %f",&a[i],&b[i],&c[i]);
	for(i=0;i<n;i++)
	{
		num1[i]=b[i]*b[i]-4*a[i]*c[i];
			if (num1[i]>1e-6)
			{
				x1[i]=(-b[i]+sqrt(num1[i]))/(2*a[i]);
				x2[i]=(-b[i]-sqrt(num1[i]))/(2*a[i]);
				printf("x1=%.5f;x2=%.5f\n",x1[i],x2[i]);
			}
			else if (num1[i]<=1e-6&&num1[i]>=-1e-6)
			{
				x1[i]=-b[i]/(2*a[i]);
				printf("x1=x2=%.5f\n",x1[i]);
			}
			else
			{
				num2[i]=-b[i]/(2*a[i]);
				num3[i]=sqrt(-num1[i])/(2*a[i]);
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",num2[i],num3[i],num2[i],num3[i]);
			}
	}
	return 0;
}

