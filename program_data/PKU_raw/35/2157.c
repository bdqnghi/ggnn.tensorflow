int main(){
	int hang,lie,i,e,m,d,f,j;
	f=0;
	int max[8];
	int min[8];
	int sz[8][8];
		scanf("%d,%d",&hang,&lie);
		for(i=0;i<hang;i++){
			for(j=0;j<lie;j++){
		scanf("%d",&sz[i][j]);	
			}
		}

		
		for(i=0;i<hang;i++){
	
			max[i]=sz[i][0];
			
			for(j=1;j<lie;j++){
				if(max[i]<sz[i][j]) max[i]=sz[i][j];
				}

			for(j=0;j<lie;j++){
				if(max[i]==sz[i][j]) e=j;
				}


			for(m=0;m<hang;m++){
             min[e]=sz[0][e];
				if(min[e]>sz[m][e]) min[e]=sz[m][e];
				}

for(m=0;m<hang;m++){
				if(min[e]==sz[m][e]) d=m;
				}

if(d==i){
printf("%d+%d",d,e);
}else{
f++;
}
	

		}

		
		if(f==hang) printf("No");
	return 0;
}