
    int main(){
    int n,a[100],b[100],t[100],m=0,s=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
		if((a[i]>=90)&&(a[i]<=140)&&(b[i]>=60)&&(b[i]<=90)){
		t[i]=1;
		}else{t[i]=0;}
	}
	for(i=0;i<n;i++){
		if(t[i]==1){
	s+=1;}
		else{
			if(m<s){
				m=s;}
	s=0;
	}}
    if(m<s){
				m=s;}
	printf("%d",m);
	return 0;
}