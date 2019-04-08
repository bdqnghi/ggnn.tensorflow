int main(int argc, char* argv[])
{
	int n,i,j;
	float a,b;
	int num[100][2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&num[i][j]);
		}
	}
	a=(float)num[0][1]*100/num[0][0];
	
    for(i=1;i<n;i++){
		b=(float)num[i][1]*100/num[i][0];
		if(b-a>5){
			printf("better\n");
			}
		else if(a-b>5){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	return 0;
}


