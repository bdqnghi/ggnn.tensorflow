int main(){
	int n;
	scanf("%d",&n);
	int a[200],b[200];
	int i,t=0,h=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]==b[i]){
		t=t+0;
		h=h+0;
		continue;
		}
		if((a[i]==0 && b[i]==1) || (a[i]==1 && b[i]==2) ||(a[i]==2 && b[i]==0)){
			t++;
			continue;
		}else{
			h++;
			continue;
		}
	}
	if(t>h)printf("A");
	if(t<h)printf("B");
	if(t==h)printf("Tie");

	return 0;
}