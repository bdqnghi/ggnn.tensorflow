


int main ()
{
	int k,n,i,j,l;
    double  w[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{   
		float h=0, x[100];
		double a=0,s=0;
		scanf("%d",&n);
			for(j=0;j<n;j++)
			{ 
			 
				scanf("%f",&x[j]);
		         h=h+x[j];
			
			}	
		
			a=h/n;
		
			for (l=0;l<n;l++)
			{
				s+=(x[l]-a)*(x[l]-a);
				
			}
			w[i]=sqrt(s/n);
	}
	for(i=0;i<k;i++)
		printf("%.5lf\n",w[i]);
	return 0;
}

