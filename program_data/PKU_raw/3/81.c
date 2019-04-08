

//#include <math.h>




int main()
{
	int n,k;
	int t;

	scanf("%d%d",&n,&k);

	int *a;
	a=(int *)malloc(sizeof(int )*n);

	int i,j;

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++){
		t=k-a[i];
		for(j=0;j!=i&&j<n;j++){
			if(t==a[j]){
				printf("yes\n");
				return 0;
			}
		}
	}

	printf("no\n");

	return 0;
}

