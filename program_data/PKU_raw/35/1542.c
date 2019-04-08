void main()
{
	int a,b,i,j,k[8]={0},m[8]={0};
	int c[8][8];
	scanf("%d,%d",&a,&b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
		scanf("%d",&c[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<b-1;j++){
			if(c[i][j]<c[i][j+1]){
			k[i]=j+1;
			}
		}
	}
		for(j=0;j<b;j++){
		for(i=0;i<a-1;i++){
			if(c[i][j]>c[i+1][j]){
			m[j]=i+1;
			}
		}
	}
		for(i=0;i<=a;i++){
			if(i==a){
			printf("No");
			}
			else if(m[k[i]]==i){
		printf("%d+%d",i,k[i]);
		break;
			}

		}
}
