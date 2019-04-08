void main(){
	int n[100][100],d[100][100], r,c,i,j,f,g;
	scanf("%d %d\n",&r,&c);
	
	for(i=0;i<r;i++){
		scanf("\n");
		for(j=0;j<c;j++){
			scanf("%d",&n[i][j]);
	d[i][j]=1;
	}
	
	}
	i=0;
	j=0;
	g=0;
	for(f=1;f<=r*c;f++){
		printf("%d\n",n[i][j]);
		d[i][j]=0;
		if(g==0){
		if(j<c-1&&d[i][j+1]){
			j++;
		g=0;}
			else if(i<r-1&&d[i+1][j]){
				i++;
			g=0;}
				else if(j>0&&d[i][j-1]){
					j--;
				g=0;}
					else if(i>0&&d[i-1][j]){
						i--;
						g=1;}
		}
		else{
			if(i>0&&d[i-1][j]){
						i--;
						g=1;}
			else if(j<c-1&&d[i][j+1]){
				j++;
			g=0;}

	}
		
}}


