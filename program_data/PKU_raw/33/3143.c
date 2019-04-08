int main(){
	char jaji[1000][256];
	int n,i,j;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s",jaji[i]);
	}

	for(i=0;i<n;i++){

	     for(j=0;j<strlen(jaji[i]);j++)
		 {
			 if(jaji[i][j]=='A'){
				 jaji[i][j]='T';
			 }
			 else if(jaji[i][j]=='T'){
				 jaji[i][j]='A';
			 }
			 else if(jaji[i][j]=='C'){
				 jaji[i][j]='G';
			 }
			 else if(jaji[i][j]=='G'){
				 jaji[i][j]='C';
			 }
		}
		 jaji[i][strlen(jaji[i])]='\0';

	}

	for(i=0;i<n;i++)
	{
		printf("%s\n",jaji[i]);
	
	}
	return 0;

}
	   

