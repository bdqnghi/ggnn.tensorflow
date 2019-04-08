int main()
{
	int n,e,j=0,i,k,s,x=0;
	int a[500],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		s=a[i]%2;
		switch(s){
		case 0:
			break;
		case 1:
			b[j]=a[i];
			j++;
			x++;
			break;
		}
	}
	for(k=1;k<=x;k++){
		for(j=0;j<x-k;j++){
			if(b[j]>b[j+1]){
				e=b[j];
				b[j]=b[j+1];
				b[j+1]=e;
			}
		}
	}
	for(j=0;j<x-1;j++){
		printf("%d,",b[j]);
	}
	printf("%d",b[x-1]);
	return 0;
}