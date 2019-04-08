int main(){
	int n,a,b,i,num;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	scanf("%d",&num);
	   if(i==1){
	        a=num;
			b=num;
	  
	  }else if(num>a){
		   b=a;
			a=num;
		}else if((a>num)&&(num>b)){
			b=num;
		}
	
	}
printf("%d\n%d\n",a,b);
	return 0;
}