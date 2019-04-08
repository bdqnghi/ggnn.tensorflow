int main(){  
	int a,b,area[8][8]={0},i,j,k,max[8],col[8],min[8];
	scanf("%d,%d",&a,&b);
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
		scanf("%d",&area[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<b-1;j++){
			max[i]=area[i][0];
			col[i]=0;
			if(area[i][j]<area[i][j+1]){
			max[i]=area[i][j+1];
			col[i]=j+1;
			}
		}
	}
	for(i=0;i<a;i++){
		for(k=0;k<a-1;k++){
			min[i]=area[0][col[i]];
			if(area[k][col[i]]>area[k+1][col[i]]){
			min[i]=area[k+1][col[i]];
			}
		}
		if(max[i]==min[i]){
		printf("%d+%d",col[i],i);
		break;
		}
		if(i!=a-1){
			continue;
		}
	printf("No");
	}

   return 0;

}