int main(){
	int n,i,j,l;
	char line[257];
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%s",line);
		l=strlen(line);
		for(j=0;j<l;j++){
			if(line[j]=='A')
				line[j]='T';
			else if(line[j]=='T')
				line[j]='A';
			else if(line[j]=='G')
				line[j]='C';
			else if(line[j]=='C')
				line[j]='G';
		}
		printf("%s\n",line);
	}
	scanf("%s",line);
	l=strlen(line);
	for(j=0;j<l;j++){
		if(line[j]=='A')
			line[j]='T';
		else if(line[j]=='T')
			line[j]='A';
		else if(line[j]=='G')
			line[j]='C';
		else if(line[j]=='C')
			line[j]='G';
	}
	printf("%s",line);

	return 0;
}