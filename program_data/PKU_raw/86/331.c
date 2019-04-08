int main()
{
	int a,i,j,d,b[100][100];
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&b[i][0]);
		for(j=1;j<=b[i][0];j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<a;i++){
		if(b[i][0]==0){
			printf("60\n");
		}
		else{
		d=0;
        for(j=1;j<=b[i][0];j++){
			d=d+3;
			if(b[i][j]+d>=60){
				break;
			}
		}
		if(j-1==b[i][0]){
			printf("%d\n",60-d);
		}
		else if(b[i][j]+d-60<=3){
			printf("%d\n",b[i][j]);
		}
		else if(b[i][j]+d-60>3){
			printf("%d\n",60-d+3);
		}
		}
	}



	return 0;
}

