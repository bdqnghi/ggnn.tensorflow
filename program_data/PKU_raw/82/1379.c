int main(){
	int n,i,j,s,t=0,m,max=0,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
        if(a>=90&&a<=140&&b>=60&&b<=90){
			t++;
            if(t>max){
			  max=t;
			}
		}else{
			t=0;
		}
	}printf("%d",max);
	return 0;
}
