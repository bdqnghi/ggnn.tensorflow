int main(){
	int a,m,i,num,n;
	scanf("%d",&a);
	i=1;
    while(i<=a){
		scanf("%d",&num);
		if(i==1){
		n=0,m=num;}
		else{
        if((num>m)&&(num>n)){
			n=m,m=num;}
		else if((num<m)&&(num>n)){
			n=num;}
	}
		i=i+1;
	}
	printf("%d\n%d",m,n);
			return 0;
}