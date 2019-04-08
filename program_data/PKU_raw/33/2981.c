  int main () {
	  int n,i,j,len;
      scanf("%d",&n);
	  char sz[N][LEN];
	  for(i=0;i<n;i++){
			  scanf("%s",sz[i]);
	  }
	  for (i=0;i<n;i++){
          len=strlen(sz[i]);
		  for (j=0;j<len;j++){
			  if(sz[i][j]=='A'){
				 sz[i][j]='T';
			  }else if(sz[i][j]=='T'){
				 sz[i][j]='A'; 
			  }else if(sz[i][j]=='G'){
			    sz[i][j]='C';
			  }else if(sz[i][j]=='C'){
				 sz[i][j]='G';
			  }
	      printf("%c",sz[i][j]);
		  }
		  printf("\n");
	  }   
  return 0;
  }

