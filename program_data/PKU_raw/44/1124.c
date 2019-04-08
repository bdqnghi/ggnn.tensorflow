
int main()
{
	int fan(int x);
	int k,z,b;
	for(k=1;k<7;k++){
		scanf("%d",&z);
		b=fan(z);
		printf("%d\n",b);
	}
	return 0;
}
int fan(int x){
	int y=0,ne=0,j;
	int wei[1000];
	double i;
	if(x==0){
		y=0;
	}
	else{
		if(x<0){
			ne=1;
			x=0-x;
		}
		for(i=1;(x>=pow(10,i));i++){
		}
		for(j=0;j<i;j++){
			wei[j]=x%10;
			x=x/10;
		}
		for((i=i-1,j=0);i>=0;(i--,j++)){
			y +=wei[j]*pow(10,i);
		}
		if(ne==1){
			y=0-y;
		}
	}
	return y;
}