int main(int argc, char* argv[])
{
	int h,l,i,j,max[8],min[8];
	scanf("%d,%d", &h,&l);
	int num[8][8];
	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			scanf("%d",&num[i][j]);
		}
	}
    for(i=0;i<h;i++){
		max[i]=num[i][0];
		for(j=0;j<l;j++){
			if(max[i]<num[i][j])
				max[i]=num[i][j];
		}
	}
	for(j=0;j<l;j++){
		min[j]=num[0][j];
		for(i=0;i<h;i++){
			if(min[j]>num[i][j])
				min[j]=num[i][j];
		}
	}
	for(i=0;i<h;i++){
		for(j=0;j<l;j++){
			if(max[i]==min[j]){
				printf("%d+%d", i,j);
				return 0;
			}
		}
	}
	printf("No");
	return 0;
}

