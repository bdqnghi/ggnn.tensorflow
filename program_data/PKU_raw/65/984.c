int main()
{
	int i,awin,bwin,n;
	int a[220],b[220];
	scanf("%d",&n);
	awin=0;
	bwin=0;
	for(i=1;i<=n;i++){
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]==0&&b[i]==2){
			bwin++;
		}else{
			if(a[i]==2&&b[i]==0){
				awin++;
			}else{
				if(a[i]>b[i]){
					bwin++;
				}else{
					if(b[i]>a[i]){
						awin++;
					}else{
						continue;
					}
				}
			}
		}
	}
	if(awin>bwin){
		printf("A");
	}else{
		if(bwin>awin){
			printf("B");
		}else{
			printf("Tie");
		}
	}
	return 0;
}