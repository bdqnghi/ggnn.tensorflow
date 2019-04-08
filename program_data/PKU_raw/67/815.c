
int main()
{

	int n,i,j=0,k=0;
	double a,b,c[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf%lf",&a,&b);
		c[i]=b/a;
	}
	for(i=1;i<n;i++)
	{

		if(c[i]-c[0]>0.05){
			printf("better");
		}
		else if(c[i]-c[0]<-0.05){
			printf("worse");
		}
		else{
			printf("same");
		}
		printf("\n");
	}

	return 0;
}
