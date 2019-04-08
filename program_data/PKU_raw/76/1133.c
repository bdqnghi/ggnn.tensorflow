
int main()
{
	int n,i,m,k;
	int a[50000],b[50000];
scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d%d",&a[i],&b[i]);
		}
		for(i=0;i<n;i++){
			for(k=i+1;k<n;k++){
				if(a[i]>a[k]){
				m=a[i];
				a[i]=a[k];
				a[k]=m;
				m=b[i];
				b[i]=b[k];
				b[k]=m;
			}
		}
       }
for(i=0;i<n-1;i++){
	if(b[i]<a[i+1]){
	printf("no");
	break;
	}else{	
		if(b[i]>b[i+1]){
			m=b[i];
				b[i]=b[i+1];
				b[i+1]=m;
		}
	}
}
if(i==n-1){
	printf("%d %d",a[0],b[n-1]);
}
return 0;
}
