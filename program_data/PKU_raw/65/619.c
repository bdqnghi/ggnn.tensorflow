int main()
{
	int a[201],b[201],n,i,na,nb;
	na=0;
	nb=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			na++;
		}else if(a[i]==b[i]){
			continue;
		}
		else{
			nb++;
		}
	}
	if(na>nb){
		printf("A");
	}else if(na<nb){
		printf("B");
	}else{
		printf("Tie");
	}
return 0;
}