int main(){
int i,n;
int s=0;
scanf("%d", &n);
for(i=1;i<=n;i++){
	
	if(!(i%7==0||(i-7)%10==0||i/7==10||i==78||i==79||i==77)){
		s=s+i*i;
	}

}
printf("%d",s);
return 0;
}
