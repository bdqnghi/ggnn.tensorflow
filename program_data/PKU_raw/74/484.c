int ff(int n){
	int hh;
	if(n==2){ return 1;}
	else if(n>2){
		for(int i=2;i<n;i++){
			if(n%i!=0){
				hh=0;
			}
			else {
				return 0;
				break;
			}
		}
		if(hh==0){
			return 1;
		}
	}
}
int gg(int n){
	int t1=n,t2=0;
	t2=t1%10;
	while(t1>=10){
		t2*=10;
		t1/=10;
		t2+=t1%10;
	}
	if(t2==n) return 1;
	else return 0;
}
int main()
{
	int m,n,i,tt,hh=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		if(ff(i)==1&&gg(i)==1){
			hh++;
		}
	}
	if(hh==0){
		printf("no");
	}
	else{
	for(i=m;i<=n;i++){
		if(ff(i)==1&&gg(i)==1){
			printf("%d",i);
			tt=i;
			break;
		}
	}
	for(i=tt+1;i<=n;i++){
		if(ff(i)==1&&gg(i)==1){
			   printf(",%d",i);
		 } 
	}
	}
	return 0;
}

