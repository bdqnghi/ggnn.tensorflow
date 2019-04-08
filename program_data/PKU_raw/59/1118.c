
int main(){
	int n,i,j,d,k,m=0;
	char a[200][200];
    
	scanf("%d",&n);

	for(i=0;i<n;i++){
			scanf("%s",a[i]);}

	scanf("%d",&d);

    for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]=='@') a[i][j]=1;
	        else if(a[i][j]=='#') a[i][j]=110;
			else if(a[i][j]=='.') a[i][j]=109;
		
		
		
	}}

    if(d!=1){
		for(k=1;k<d;k++){		
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					if(a[i][j]==k&&a[i+1][j]==109&&i!=n-1) a[i+1][j]=k+1;}}
					
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){					
					if(a[i][j]==k&&a[i-1][j]==109&&i!=0) a[i-1][j]=k+1;}}

		    for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					if(a[i][j]==k&&a[i][j+1]==109&&j!=n-1) a[i][j+1]=k+1;}}

		    for(i=0;i<n;i++){
				for(j=0;j<n;j++){
                   	if(a[i][j]==k&&a[i][j-1]==109&&j!=0) a[i][j-1]=k+1;}}}}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]!=109&&a[i][j]!=110) m++;}}


		printf("%d",m);
        return 0;

	}
