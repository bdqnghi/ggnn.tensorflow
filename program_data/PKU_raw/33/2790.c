char anti_base(char base){
	char anti;
	    if(base == 'A')
			anti = 'T';
		if(base == 'T')
			anti = 'A';
		if(base == 'G')
		    anti = 'C';
	    if(base == 'C')
			anti = 'G';
		return anti;
}
int main (){
	int n,i,j;
	scanf ("%d",&n);
	char sequence[n][300],a;
	for (i = 0; i < n; i ++){
		scanf("%s",sequence[i]);
	}
	for (i = 0;i < n;i ++){
	for (j = 0;;j ++){
		if(sequence[i][j] != 0 ){
	     	a = anti_base(sequence[i][j]);
	    	printf("%c",a);
		}
		else
			break;
	}
	 printf("\n");
	}


}