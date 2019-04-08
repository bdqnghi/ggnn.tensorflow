int main(){
	int n,i,j,len[100];
	char danci[100][100];
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
	  scanf("%s",danci[i]);
  }
  for(i=0;i<n;i++){
	  len[i]=strlen(danci[i]);
	  if(danci[i][len[i]-2]=='l'||danci[i][len[i]-2]=='e'){
		  danci[i][len[i]-2]='\0';
	  }
	  else if(danci[i][len[i]-3]=='i'){
		  danci[i][len[i]-3]='\0';
	  }
	  printf("%s\n",danci[i]);
	  }
	  return 0;
  }
