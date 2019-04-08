
void main(){
	int huiwen(int a);
	int prime(int b);
	int min,max,i,j=0,p[100]={0};
	scanf("%d%d",&min,&max);
	for (i=min;i<=max;i++){
		if (huiwen(i)==1&&prime(i)==1){
			j++;
			p[j]=i;
		}
	}
	if (j!=0){
		for (i=1;i<j;i++)
			printf("%d,",p[i]);
		printf("%d",p[j]);
	}
	else printf("no");
}
int huiwen(int a){
	int temp,weishu=0,i,j=-1,count=0,number[10];
	for (i=1;;i*=10){
		if (a/i>=1&&a/i<10)
			weishu++;
		else if (a/i>=10){
			weishu++;
			continue;
		}
		else break;
	}
	temp=a;
	for (i=pow((float)10,weishu-1);i>=1;i/=10){
		if (temp/i>=1&&temp/i<10){
			j++;
			number[j]=temp/i;
			temp%=i;
		}
		else{
			j++;
			number[j]=0;
			temp%=i;
		}
	}
	for (i=0;i<weishu;i++){
		if (number[i]!=number[weishu-i-1])
			count++;
	}
	if (count==0) return 1;
	else return 0;
}
int prime(int b){
	int i;
	for(i=2;i<=sqrt((float)b);i++){
		if (b%i==0)
			break;
	}
	if (i>sqrt((float)b))
		return 1;
	else return 0;
}


