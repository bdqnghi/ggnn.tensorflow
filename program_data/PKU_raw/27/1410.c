int main(int argc, char* argv[])
{
	int n,i;
	double x1[11],x2[11],disc[11],real[11],imag[11];
	float a[11],b[11],c[11];
	scanf ("%d",&n);
	for(;n>11;)
	{
		printf("Wrong input,please input again.\n");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)
		scanf("%f %f %f",&a[i],&b[i],&c[i]);
	for(i=0;i<n;i++)
	{
		disc[i]=b[i]*b[i]-4*a[i]*c[i];
			if (disc[i]>1e-6)
			{
				x1[i]=(-b[i]+sqrt(disc[i]))/(2*a[i]);
				x2[i]=(-b[i]-sqrt(disc[i]))/(2*a[i]);
				printf("x1=%.5f;x2=%.5f\n",x1[i],x2[i]);
			}
			else if (disc[i]<=1e-6&&disc[i]>=-1e-6)
			{
				x1[i]=-b[i]/(2*a[i]);
				printf("x1=x2=%.5f\n",x1[i]);
			}
			else
			{
				real[i]=-b[i]/(2*a[i]);
				imag[i]=sqrt(-disc[i])/(2*a[i]);
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",real[i],imag[i],real[i],imag[i]);
			}
	}
	return 0;
}

