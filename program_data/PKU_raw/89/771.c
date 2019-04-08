// ??????.cpp : Defines the entry point for the console application.
//


int main(int argc, char* argv[]){
	int i,j,n,hang=1,sz[10000][2],renshita,tarenshi,mingliu=0;
	scanf("%d",&n);
	i=0;
	scanf("%d%d",&sz[0][0],&sz[0][1]);
	while(sz[i][0]!=0||sz[i][1]!=0){
		i++;
		scanf("%d%d",&sz[i][0],&sz[i][1]);
		hang++;
	}
	for(j=0;j<n;j++){
		renshita=0;
		tarenshi=0;
		for(i=0;i<hang;i++){
			if(sz[i][1]==j){
				renshita++;
			}
		}
		for(i=0;i<hang-1;i++){
			if(sz[i][0]==j){
				tarenshi++;
			}
		}
		if(renshita==n-1&&tarenshi==0){
			printf("%d\n",j);
			mingliu++;
		}
	}
	if(mingliu==0){
		printf("NOT FOUND");
	}
	return 0;
}
