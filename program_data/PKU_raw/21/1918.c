int main()
{
    int n,c=0;
	int i,j;
	int a[300];
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		for (j=0;j<n-i-1;j++){
			if (a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}

	double  tot=0;
	for (i=0;i<n;i++){
		tot+=a[i];
	}
	tot=tot/n;
	double cha=0,tt;
	for (i=0;i<n;i++){
		 tt=a[i]-tot;
		if (tt<0){
			tt=-tt;
		}
		if (tt>cha){
			cha=tt;
		}
	}
	for (i=0;i<n;i++){
		tt=a[i]-tot;
		if (tt<0){
			tt=-tt;
		}
		if (cha==tt){
			if (c>0){
				printf(",");
			}
			printf("%d",a[i]);
			c++;
		}
	}
	printf("\n");
    return 0;
}