int main()
{
	int i,n;
	scanf("%d\n",&n);
	double x1[99],x2[99],a[99],b[99],c[99],disc[99],realpart[99],imagpart[99];
	for(i=0;i<n;i++)
	scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
	for(i=0;i<n;i++)
	{
		disc[i]=b[i]*b[i]-4*a[i]*c[i];	
		if(disc[i]==0)	printf("x1=x2=%.5lf\n",-b[i]/(2*a[i]));
		else if(disc[i]>0)
			{	
				x1[i]=(-b[i]+sqrt(disc[i]))/(2*a[i]);
				x2[i]=(-b[i]-sqrt(disc[i]))/(2*a[i]);
				printf("x1=%.5lf;x2=%.5lf\n",x1[i],x2[i]);
			}
		else
			{
				realpart[i]=-b[i]/(2*a[i]);
				imagpart[i]=sqrt(-disc[i])/(2*a[i]);
				(b[i]==0)?printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",-realpart[i],imagpart[i],-realpart[i],imagpart[i]):printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",realpart[i],imagpart[i],realpart[i],imagpart[i]);
			}
	};
	return 0;
}




