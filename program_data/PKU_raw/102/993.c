int main()
{
	int n,i,j,k,nan=0,nv=0;
	double h[100],a[100],b[100],t;
	char sex[100];
	scanf("%d",&n);
	j=1;
	k=0;
	for(i=0;i<n;i++){
		scanf("%s %lf",sex,&h[i]);
		if(strcmp(sex,"male")==0){
			a[j]=h[i];
			j++;
			nan++;
		}
		if(strcmp(sex,"female")==0){
			b[k]=h[i];
			k++;
			nv++;
		}
	}
	for(i=0;i<nv;i++){
		for(j=0;j<nv-i;j++){
			if(b[j]<b[j+1]){
				t=b[j+1];
				b[j+1]=b[j];
				b[j]=t;
			}
		}
	}
	for(i=1;i<=nan;i++){
		for(j=1;j<=nan-i;j++){
			if(a[j]>a[j+1]){
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=1;i<=nan;i++){
		if(i==1)
			printf("%.2lf",a[i]);
		else
			printf(" %.2lf",a[i]);
	}
	for(i=0;i<nv;i++){
		printf(" %.2lf",b[i]);
	}
	printf("\n");
	return 0;
}