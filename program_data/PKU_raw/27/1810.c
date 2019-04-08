int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int i;
         

    double a[200],b[200],c[200],disc[100],X1[100],X2[100],realpart[100],imagpart[100];
	
	for(i=0;i<n;i++)
	{scanf("%lf%lf%lf\n",&a[i],&b[i],&c[i]);}
          disc[i]=b[i]*b[i]-4*a[i]*c[i];
	for(i=0;i<n;i++)
	{
            disc[i]=b[i]*b[i]-4*a[i]*c[i];
           if(fabs(disc[i])<=1e-6)
	   {
		  printf("x1=x2=%.5f\n",-b[i]/(2*a[i]));
	   }
	   else if(disc[i]>1e-6)
	   {
		   X1[i]=(-b[i]+sqrt(disc[i]))/(2*a[i]);
		   X2[i]=(-b[i]-sqrt(disc[i]))/(2*a[i]);
		   printf("x1=%.5f;x2=%.5f\n",X1[i],X2[i]);
	   }
	   else
	   {
		   realpart[i]=-b[i]/(2*a[i]);
		   imagpart[i]=sqrt(-disc[i])/(2*a[i]);
		   if(fabs(realpart[i])<=1e-6)
                        {
		        printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-realpart     [i],imagpart[i],-realpart[i],imagpart[i]);
                        }
                      else{printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",realpart[i],imagpart[i],realpart[i],imagpart[i]);}

	   }
	}
	return 0;
}
