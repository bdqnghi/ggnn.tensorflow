int main(int argc, char* argv[])
{
    int n,sz[100][2],i,j,p[100]={1},hour=0,hour1[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&sz[i][j]);
			
		}
	}
	for(i=0;i<n;i++){
		if(sz[i][0]<90||sz[i][0]>140||sz[i][1]<60||sz[i][1]>90){
			p[i]=0;
		}
		else p[i]=1;
	}
	for(i=0;i<n;i++){
		if(p[i]==1) hour++;
		if(p[i]==0){
			hour1[i]=hour;
			hour=0;
		}
	}
	for(i=0;i<n;i++){
		if(hour1[i]>hour){
			hour=hour1[i];
		}
	}

		
	    printf("%d",hour);




	
	return 0;
	
}