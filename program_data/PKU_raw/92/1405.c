void paixu(int a[],int n){
	int e,k,i;
	if(n>1){
		for(k=1;k<n;k++){
			for(i=0;i<n-k;i++){
				if(a[i]<a[i+1]){
					e=a[i+1];
					a[i+1]=a[i];
					a[i]=e;
				}
			}
		}
	} 
}

void match(int a[],int b[],int n){
	int num=0;
	int money=0;
	int afr=0,bfr=0;
	int ata=n-1;
	int bta=n-1;
	int c=1;
	for(;afr<=ata;){
		if(a[afr]>b[bfr]){
			money+=200;
			bfr++;
			afr++;
		}else if(a[afr]<b[bfr]){
			money-=200;
			bfr++;
			ata--;
		}else if(a[afr]==b[bfr]){
			for(;c==1;){
				if(a[ata]>b[bta]){
					money+=200;
					ata--;
					bta--;
				}else if(a[ata]<=b[bta]){
					if(a[ata]<b[bfr]){
						money-=200;
					}
					ata--;
					bfr++;
					c=0;
				}
			}
			c=1;
		}
	}
	printf("%d\n",money);
}

int main()
{
	int n,i;
	int qi[1000];
	int tian[1000];
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}else{ 
			for(i=0;i<n;i++){
				scanf("%d",&tian[i]);
			}
			paixu(tian,n);	
			for(i=0;i<n;i++){
				scanf("%d",&qi[i]);
			}
			paixu(qi,n);
			match(tian,qi,n);
		}
	}
	return 0;
}





