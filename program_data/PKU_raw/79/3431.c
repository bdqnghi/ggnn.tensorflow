int main(){
	int n[300],m[300],i,j,k[300];
	int x,y;
	int monkey[300][300];
	for(y=0;;y++){
	   scanf("%d%d",&n[y],&m[y]);
	   if(n[y]== 0&& m[y]==0){
		   break;
	   }
	   
	}

	for(x=0;x<y;x++){
		k[x]=0;
	   for(i=0;i<n[x];i++){
		   monkey[x][i]=i+1;
	   }
	   for(i=0,j=1;k[x]!=n[x]-1;){
		  if(j==m[x]){
			  monkey[x][i]=0;
			  k[x]++;
			  j=0;
		  }
		  if(i!=n[x]-1){
			  i++;
		  }else{
			  i=0;
		  }
		  if(j!=m[x]&&monkey[x][i]!=0){
			  j++;
		  }
	   }
	   for(i=0;i<n[x];i++){
		  if(monkey[x][i]!=0){
			  printf("%d\n",monkey[x][i]);
		  }
	   }
                                      
	}
   return 0;
}
