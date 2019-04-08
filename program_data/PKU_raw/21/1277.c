int main()
{
	int i,n,m,j=0,c=0;
	unsigned int a[300],b[300];
	double av,cha,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum=a[i]+sum;
	}
	av=sum/n;

	cha=fabs(av-a[0]);

	for(i=0,m=0;i<n;i++){
		if(cha<fabs(a[i]-av)){
			cha=fabs(a[i]-av);
			b[m]=a[i];
            j=1;
		}
	}
    if(j!=1){
		b[0]=a[0];
	}
	for(i=b[0]+1,m=1;i<n;i++){
		if(cha==fabs(a[i]-av)){
			b[m]=a[i];
			m++;
            c++;
		}
	}
	printf("%d",b[0]);
	for(i=1;i<=c;i++){
	printf(",%d",b[i]);

	}
	return 0;
}


