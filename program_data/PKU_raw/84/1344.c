int main(){
	int n,i;
	int a,b;
	int c;
	scanf("%d%d%d",&n,&a,&b);
	if(n>=3){
        for(i=3;i<=n;i++){
		   scanf("%d",&c);
		   if(c>=a||c>=b){
			   if(a>=b){
				   b=c;
			   }
			   else{
				   a=c;
			   }
		   }
		   else{
			   continue;
		   }
		}
		if(a>=b){
			printf("%d\n%d",a,b);
		}
		else{
			printf("%d\n%d",b,a);
		}	  
	}
    else{
		printf("%d\n%d",a,b);
	}
	return 0;
}
