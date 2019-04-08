int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int s[200][200];
	int i,r,j;
	for(i=0;i<m;i++){
		for(r=0;r<n-1;r++){
			scanf("%d ",&s[i][r]);
		}
		if(r==n-1){
			scanf("%d",&s[i][r]);
		}
	}
	int z,x,c,v,p;
	i=0;
	if(i==0){
		r=0;
		if(r==0){
			x=s[i+1][r];
			v=s[i][r+1];
        
			if((s[i][r]>=x)&&(s[i][r]>=v)){
				printf("%d %d\n",i,r);
			}
		}
		for(r=1;r<n-1;r++){
             x=s[i+1][r];
			 c=s[i][r-1];
			v=s[i][r+1];
			if((s[i][r]>=x)&&(s[i][r]>=v)&&(s[i][r]>=c)){
				printf("%d %d\n",i,r);
			}
		}
		if(r==n-1){
			 x=s[i+1][r];
			 c=s[i][r-1];
			 	if((s[i][r]>=x)&&(s[i][r]>=c)){
				printf("%d %d\n",i,r);
			}
		}
	}
	for(i=1;i<m-1;i++){
		r=0;
		if(r==0){
			z=s[i-1][r];
			x=s[i+1][r];
			v=s[i][r+1];
			if((s[i][r]>=z)&&(s[i][r]>=x)&&(s[i][r]>=v)){
				printf("%d %d\n",i,r);
			}
		}
		for(r=1;r<n-1;r++){
		    z=s[i-1][r];
			x=s[i+1][r];
			c=s[i][r-1];
			v=s[i][r+1];
			if((s[i][r]>=z)&&(s[i][r]>=x)&&(s[i][r]>=v)&&(s[i][r]>=c)){
				printf("%d %d\n",i,r);
			}
		}
       if(r==n-1){
           z=s[i-1][r];
			x=s[i+1][r];
			c=s[i][r-1];
			if((s[i][r]>=z)&&(s[i][r]>=x)&&(s[i][r]>=c)){
				printf("%d %d\n",i,r);
			}
		}
	   }
	if(i==m-1){
		r=0;
		if(r==0){
			z=s[i-1][r];
			v=s[i][r+1];
			if((s[i][r]>=z)&&(s[i][r]>=v)){
				printf("%d %d\n",i,r);
			}
		}
		for(r=1;r<n-1;r++){
		    z=s[i-1][r];
			c=s[i][r-1];
			v=s[i][r+1];
			if((s[i][r]>=z)&&(s[i][r]>=v)&&(s[i][r]>=c)){
				printf("%d %d\n",i,r);
			}
		}
       if(r==n-1){
           z=s[i-1][r];
			c=s[i][r-1];
			if((s[i][r]>=z)&&(s[i][r]>=c)){
				printf("%d %d\n",i,r);
			}
		}
	   }
	return 0;
}



			
