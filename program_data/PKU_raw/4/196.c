int main()
{
	int ro,co,sz[100][1000],i,j,m,k,c=0,b=1;
	scanf("%d%d",&ro,&co);
	for(i=0;i<ro;i++){
		for(j=0;j<co;j++){
			scanf("%d",&sz[i][j]);
		}
	}
    m=ro*co;
	i=0;
	j=0;
    for(k=0;k<m;k++){
   	printf("%d\n",sz[i][j]);
	if(ro>=co){
	if(j==0&&i<co-1){
		     j=i+2;
			 i=-1;
		 }
	 j--;
	 i++;
     if((j<0&&i>co-1)||i>ro-1){
			 j=co-1;
			 i=c+1;
			 c++;
		 }

	   }
   if(ro<co){
		if(j==0&&i<=ro-1){
			    j=i+2;
				i=-1;
			}
	  j--;
	  i++; 
	   if(i>ro-1){
		  i=0;
		  j=ro+c+1;
		  c++;
	  }
	
     if(j>co-1){
         j=co-1;
		 i=b;
		 b++;
	  }
		}
	
	}
	return 0;
	}