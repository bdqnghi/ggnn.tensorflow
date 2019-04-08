int main(){
int sum=0; 
int n,i;
    scanf("%d",&n);
for(i=1;i<=n;i++){
    if(i<7){
		sum+=i*i;
	}else if(i>=7){
	  if(i%7==0||(i-7)%10==0||i/10==7){
		continue;
	  }else{
		sum+=i*i;
	  }
	}
}
  printf("%d",sum);
  return 0;
}
