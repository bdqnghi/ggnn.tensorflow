int main()
{
	int n,row,col;
	int s[100][100];
	int i=0,k=0,j=0,h=0;
	int e=0,d=0,f=0,g=0;
	int area;
	scanf("%d",&n);
	for(row=0;row<n;row++){
		for(col=0;col<n;col++){
          scanf("%d",&(s[row][col]));
		}
	}

	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			if(s[i][k]==0){
				e=i;
				d=k;
				break;
			}
		}
		if(k<n){
		if(s[i][k]==0){
			break;
		}
		}
	
	}
	
	for(j=n-1;j>=0;j--){
		for(h=n-1;h>=0;h--){
			if(s[j][h]==0){
				f=j;
				g=h;
				break;
			}
		}
	if(h>=0){
		if(s[j][h]==0)
		{
			break;
		}
	}
	}

//	printf("%d%d%d%d\n",f,g,e,d);
	area=(f-e-1)*(g-d-1);
	printf("%d\n",area);
	return 0;
}

