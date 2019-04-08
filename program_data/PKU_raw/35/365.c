int main(){
	int m,n,i,k,a,b,t,count=0,x=0;
	scanf("%d,%d",&m,&n);
	int s[m][n];
	for(i=0;i<m;i++){
		for(k=0;k<n;k++){
			scanf("%d",&s[i][k]);
		}
	}
	for(i=0;i<m;i++){
		a=i,b=0;
		for(k=0;k<n;k++){
			if(s[i][k]>s[i][0])
				a=i,b=k;
		}
		for(t=0;t<m;t++){
			if(s[a][b]>s[t][b])
				count++;
		}
		if(count==0){
			printf("%d+%d",a,b);
			x++;
		}
	}
	if(x==0)
		printf("No");
	return 0;
}





			

		
	
	
	
	
