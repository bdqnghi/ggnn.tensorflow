
int main(int argc, char* argv[])
{
	int a[13]={0 ,13, 44, 72, 103, 133 ,164, 194, 225, 256, 286, 317 ,347};
    int b,d,i,j;//xing qi ji //
	int c[13];//meiyue shi xing qi ji//
	scanf("%d",&b);
	for(i=1;i<=12;i++){
		d=b+a[i]%7-1;
		if(d<8){
			c[i]=d;}
		else{
			c[i]=d-7;}
	}
	for(j=1;j<=12;j++){
		if(c[j]==5){
			printf("%d\n",j);}
	}
	return 0;
}

