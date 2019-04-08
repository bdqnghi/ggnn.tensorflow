int main(){
    int n;
	int i=0,s=0;
    scanf("%d" ,&n);
	while(i<=n){
		if(i%7==0){
		s=s;
		}else if(i<=10){
		s=s+i*i;
		}else if(((i%10)!=7)&&(((i-(i%10))/10)!=7)){
		s=s+i*i;
		}
		i++;
	}
    printf("%d" ,s);
return 0;
}   