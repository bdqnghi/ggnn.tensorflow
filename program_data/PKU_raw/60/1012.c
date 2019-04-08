int main(int argc, char* argv[])
{
	int n;
	int i,j;
	int a=0,b=0,c=0;
	scanf("%d",&n);
	for(i=2;i<n-1;i++){
		a=0;
		b=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				a=1;
			}
		}
		if(a==1){
			continue;
		}
		if(a==0){
			for(j=2;j<i+2;j++){
				if((i+2)%j==0){
					b=1;
				}
			}
		}
		if(a==0&&b==0){
			printf("%d %d\n",i,i+2);
			c=1;
		}
	}
	if(c==0){
		printf("empty");
	}
	return 0;
}
