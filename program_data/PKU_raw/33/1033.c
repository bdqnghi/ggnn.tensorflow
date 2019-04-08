int main()
{
	int i,j,n;
	char zfc[MAX+1];
	char a='A';
	char b='T';
	char c='C';
	char d='G';
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%s",zfc);
	
		for(j=0;zfc[j];j++){
			if(zfc[j]==a){
				zfc[j]=b;
				continue;}
			
			if(zfc[j]==b){
				zfc[j]=a;
				continue;}

			if(zfc[j]==c){
				zfc[j]=d;
				continue;}

			if(zfc[j]==d){
				zfc[j]=c;
				continue;}
			
		}
			printf("%s\n",zfc);
		}	
	
	return 0;
}
			
			
	
