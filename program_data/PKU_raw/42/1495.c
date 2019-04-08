int main()
{
	int b,i,c,d,n,e,j,k,m,a[1000000];
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&b);
	for(k=1;k<=n;k++){
		if(a[k]!=b){
				printf("%d",a[k]);
		break;
		}
	}

	for(j=k+1;j<=n;j++){
			if(a[j]!=b)printf(" %d",a[j]);
	}

	return 0;
}
