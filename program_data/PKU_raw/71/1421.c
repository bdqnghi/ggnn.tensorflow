int main()
{
	int sz[200][3];
	int n;
	scanf("%d\n",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	int k;
	for(i=0;i<n;i++){
		
        
		int total=0;
	
		if(sz[i][1]<sz[i][2]){
			if(sz[i][0]%400==0||(sz[i][0]%4==0&&sz[i][0]%100!=0)){
		    month[1]=29;
		}
		    else{
			month[1]=28;
		}
			
			for(k=sz[i][1]-1;k<sz[i][2]-1;k++){
				total+=month[k];
			}
			
		
		
			
			if(total%7==0)
					printf("YES\n");
				else
					printf("NO\n");
		}
			
		
		else{
            if(sz[i][0]%400==0||(sz[i][0]%4==0&&sz[i][0]%100!=0)){
		         month[1]=29;
		}
	      	else{
			    month[1]=28;
		}
             for(k=sz[i][2]-1;k<sz[i][1]-1;k++){
				 total+=month[k];
			 }
		
				 if(total%7==0)
					printf("YES\n");
				else
					printf("NO\n");
		}
			
	}
	
    return 0;
}



