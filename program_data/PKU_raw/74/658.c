int main(int argc, char* argv[])
{
	int m,n,i,j,k,hws=0;
	scanf("%d %d",&m,&n);
	int s=n-m+1;
	int *a;
	a = (int *)malloc(sizeof(int)*s);
	int *reversed_number;
	reversed_number = (int *)malloc(sizeof(int)*s);
	int *remainder;
	remainder = (int *)malloc(sizeof(int)*s);
	int *b;
	b = (int *)malloc(sizeof(int)*s);
	for(k=0;k<s;k++){
		a[k]=0;
		reversed_number[k]=0;
		remainder[k]=0;
		b[k]=k+m;
	}
	for(i=m;i<=n;i++){
		for(j=2;j<i;j++){
			if(b[i-m]%j==0)
				a[i-m]++;
		}
	}
	for(i=m;i<=n;i++){
		if(a[i-m]==0){
			while(b[i-m]!=0){
				remainder[i-m]=b[i-m]%10;
				reversed_number[i-m]*=10;
				reversed_number[i-m]+=remainder[i-m];
				b[i-m]=b[i-m]/10;
			}
		}
		if(reversed_number[i-m]==i)
			hws++;
	}
    if(hws==0)
		printf("no");
	int c=0;
	if(hws!=0){
		for(i=m;i<=n;i++){
			if(reversed_number[i-m]==i&&i!=1&&i!=2){
				c=i;
				printf("%d",i);
				break;
			}
		}
	}
	if(hws!=0){
		for(j=c+1;j<=n;j++){
			if(reversed_number[j-m]==j&&j!=1&&j!=2)
				printf(",%d",j);
		}
	}
	return 0;
}

