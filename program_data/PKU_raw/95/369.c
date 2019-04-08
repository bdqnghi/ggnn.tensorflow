void main()
{
	char p[80],d[80];
	gets(p);
	gets(d);
	int i,j=0;
	for(i=0;p[i]!='\0';i++){
		if(p[i]<='Z'&&p[i]>='A'){
			p[i]=p[i]+32;
		}
	}
	for(i=0;d[i]!='\0';i++){
		if(d[i]<='Z'&&d[i]>='A'){
			d[i]=d[i]+32;
		}
	}
	for(i=0;p[i]!='\0'&&d[i]!='\0';i++){
		if(p[i]>d[i]&&j==0){
			printf(">");
			j=1;
		}
		else if(p[i]<d[i]&&j==0){
			printf("<");
			j=1;
		}
	}
	if(j==0){
		printf("=");
	}
}


