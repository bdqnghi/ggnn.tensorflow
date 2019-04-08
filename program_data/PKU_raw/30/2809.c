int main(){
	int n;
	int s=0;
scanf("%d",&n);
	for(int i=0;i<=n;i++){		
		if(i%7!=0&&i%10!=7&&i/10!=7){
			s+=i*i;
		}
	}
	printf("%d\n",s);
	return 0;
}
