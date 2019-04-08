
int jisuan(int n,int k){
	int num=1,x=1,i;

	while(1){
		for(i=0;;i++){
			if(x%n==k&&x/n>0){
				x=x/n*(n-1);
			}
			else
				break;
			if(i==n-1){
				return num-1;
			}
		}
		x=num++;
	}
}

int main(int argc, char* argv[])
{
	int x,y,result;
	scanf("%d %d",&x,&y);
	result=jisuan(x,y);
	printf("%d\n",result);

	return 0;
}