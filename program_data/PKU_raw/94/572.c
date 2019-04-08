int main(){
	
	int N,e,h;
	int s[500],j[500];
	int i=0,k=0,g=1;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&(s[i]));
		if(s[i]%2!=0){
			j[k]=s[i];
			k++;
		}
	}
	h=k;
	k=0;
   for(g=1;g<=h;g++){
		for(k=0;k<h-g;k++){
			if(j[k]>j[k+1]){
				e=j[k+1];
				j[k+1]=j[k];
				j[k]=e;
			}
		}
	}
   k=0;
  for(k=0;k<h;k++){
	  

           if(k<h-1){
		  printf("%d,",j[k]);
	  }
	  if(k==h-1){
		  printf("%d",j[k]);

	  }
	}

	return 0;

}