int main(){
	char s[105];
	int a[105]={0},i,j,u,x,ys=0,qs=0;
	gets(s);
	x=strlen(s);

	for(i=0;i<x;i++){
		a[i]=s[i]-'0';
	}
	
	for(i=0;i<x-1;i++){
		u=a[i]%13;
		a[i]=a[i]/13;
		a[i+1]+=u*10;

	}
	ys=a[x-1]%13;
	a[x-1]=a[x-1]/13;

	for(i=0;i<x;i++){
		if(a[i]!=0){
			qs=i;
			break;
		}
	}
	if(i==x){
		printf("0");
	}
	else if(i!=x){for(j=qs;j<x;j++){
		printf("%d",a[j]);
	}
	}
	printf("\n");
	printf("%d",ys);

	return 0;
}
