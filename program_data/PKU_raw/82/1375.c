int main(){
	int a[100]={0};
	int s=0,b1,b2;
	int i,n,t,max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&b1,&b2);
		if(b1>=90&&b1<=140&&b2>=60&&b2<=90){
			s++;
			if(s>max){
				max=s;
			}
		}else{
			s=0;
		}
		
	}
		printf("%d",max);
	
	return 0;
}