int main( ){
	int n,y;
	int t=0;
	
	scanf("%d",&n);
	if(n>10000){
		int i=4;
    for(int num=n;num>0;num/=10){
	y=pow(10,i);
	t=t+num%10*y;
	i=i-1;
	}
	}
	else if(n>1000){
	int i=3;
    for(int num=n;num>0;num/=10){
	y=pow(10,i);
	t=t+num%10*y;
	i=i-1;
	}
	}
		else if(n>100){
	int i=2;
    for(int num=n;num>0;num/=10){
	y=pow(10,i);
	t=t+num%10*y;
	i=i-1;
	}
		}
	else if(n>10){
	int i=1;
    for(int num=n;num>0;num/=10){
	y=pow(10,i);
	t=t+num%10*y;
	i=i-1;
	}
	}
	else if(n>1){
	t=n;
	}
	printf("%d",t);
	
	return 0;
}