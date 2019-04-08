int main(int argc, char* argv[])
{
	int n,i,sum=0;
	scanf("%d",&n);
	int *a;
	a = (int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	double aver=sum*1.0/(n*1.0);
	double *c;
	c = (double *)malloc(sizeof(double)*n);
	for(i=0;i<n;i++){
		c[i]=fabs(a[i]*1.0-aver);
	}
	int d=0;
	double max=c[0];
	for(i=0;i<n;i++){
		if(max<c[i]){
			max=c[i];
			d=i;
		}
	}
	int b=0;
	for(i=0;i<n;i++){
		if(c[i]==max)
			b++;
	}
	printf("%d",a[d]);
	if(b!=1){
		for(i=d+1;i<n;i++){
			if(c[i]==max)
				printf(",%d",a[i]);
		}
	}
    return 0;
}

