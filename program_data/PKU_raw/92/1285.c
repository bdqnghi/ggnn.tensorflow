

int n;
int a[MAX],b[MAX];
int i,j,k,ans;


int main(){


	
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		for(i=0;i<n;++i)scanf("%d",a+i);
		for(i=0;i<n;++i)scanf("%d",b+i);
		sort(a,a+n);
		sort(b,b+n);
		ans=-200*n;
		for(j=0;j<n;++j){
			k=0;
			for(i=0;i<n;++i){
				if(a[i]>b[(i+j)%n])k+=200;
				if(a[i]<b[(i+j)%n])k-=200;
			}
			if(k>ans)ans=k;
		}
		printf("%d\n",ans);
	}

	return 0;
}
