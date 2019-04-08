int main(){
	int n;
	int result=0;
	scanf("%d",&n);
    int i=1;
	for(i=1;i<=n;i++){
		if((int)i%7==0||(int)i/10==7||(int)i%10==7){
			continue;}

		result+=i*i;}
	    printf("%d",result);
		return 0;
}
