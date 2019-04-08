int issushu(int number);
int main(){
int n,i;
int s=0;
scanf("%d",&n);
for(i=3;i+2<=n;i=i+2){
	int p=0;
	if(issushu(i)){
		if(issushu(i+2)){
		s=i;
		p=i+2;
		printf("%d %d\n",s,p);
		}
		}
}
if(s==0){
printf("empty");
}
return 0;
}

int issushu(int number){
int i;
for(i=2;i<number;i++){
	if(number%i==0){
	return 0;
	}
}
return 1;
}
