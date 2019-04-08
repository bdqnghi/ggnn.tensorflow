int main()
{
	int n,i,sz1[200],sz2[200],a=0,b=0;
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++){
		scanf("%d %d\n",&sz1[i],&sz2[i]);
	}
	scanf("%d %d",&sz1[n-1],&sz2[n-1]);
	for(i=0;i<n;i++){
		if(sz1[i]==0&&sz2[i]==1){
			a++;
		}
		if(sz1[i]==1&&sz2[i]==2){
			a++;
		}
			if(sz1[i]==2&&sz2[i]==0){
			a++;
		}
		if(sz1[i]==1&&sz2[i]==0){
			b++;
		}
		if(sz1[i]==2&&sz2[i]==1){
			b++;
		}
		if(sz1[i]==0&&sz2[i]==2){
			b++;
		}
	}
	if(a>b){
		printf("A");
	}
	if(a<b){
		printf("B");
	}
	if(a==b){
		printf("Tie");
	}
	return 0;
}