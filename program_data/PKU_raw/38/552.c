int main()
{
	int i,n,a;
	double num=0;
	float x[100],sum=0,b;
	scanf("%d",&n);
	while(n>0)
	{
		sum=0;num=0;
			scanf("%d",&a);
	for(i=0;i<a;i++){                            
		scanf("%f",&x[i]);
	}
	for(i=0;i<a;i++){
		sum+=x[i];
		
	}
	b=sum/a;
	for(i=0;i<a;i++){
		num+=pow((x[i]-b),2);
	}

		printf("%0.5lf\n",sqrt(num/a));
	
	n--;
	}
    return 0;
}



	