int fanxushu(int x)
{
	long j,a,shuzu[10];
	int k,l;
	a=abs(x);
	for(j=0;j<10;j++){
		shuzu[j]=(a%(long)pow(10,j+1))/(long)pow(10,j);
	}
	for(j=0;j<10;j++){
		if(shuzu[j]!=0){
			k=j;
			break;
		}
	}
	for(j=9;j>=0;j--){
		if(shuzu[j]!=0){
			l=j;
			break;
		}
	}
	for(j=0;;j++){
		printf("%d",shuzu[k+j]);
		if(k+j==l){
			break;
		}
	}
	return 0;
}
int main()
{
	int i,shuru;
	for(i=0;i<6;i++){
		scanf("%d",&shuru);
		if(shuru==0){
			printf("0\n");
		}
		if(shuru>0){
			fanxushu(shuru);
			printf("\n");
		}
		if(shuru<0){
			printf("-");
			fanxushu(shuru);
			printf("\n");
		}
	}
	return 0;
}
