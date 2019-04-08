int main()
{
	int n,i,m=0,p=0;
	int	a[200],b[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]!=b[i]){
			if(a[i]+b[i]==1){
				if(a[i]>b[i]){
					p++;
				}else{
					m++;
				}
			}else if(a[i]+b[i]==3){
				if(a[i]>b[i]){
					p++;
				}else{
					m++;
				}
			}else if(a[i]+b[i]==2){
				if(a[i]>b[i]){
					m++;
				}else{
					p++;
				}
			}
		}
	}
		if(m>p){
			printf("A");
		}else if(m<p){
			printf("B");
		}else if(m==p){
			printf("Tie");
		}
		return 0;
	}
