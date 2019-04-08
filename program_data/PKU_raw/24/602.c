int main ()
{
	char word[1000];
	gets(word);
	int z=0,y=0;
	char val[50][20]={0},m[50][20]={0};
	int i,n[50],x[50];
	
	int g;
	g=strlen(word);
	for(i=0;i<g;i++){
		if(word[i]==' '||word[i]=='\0'){
		    z++;
			y=0;
		   }
		if(word[i]!=' '){
			val[z][y]=word[i];
			y++;
			}
	}
	for(i=0;i<z+1;i++){
		n[i]=strlen(val[i]);
		x[i]=n[i];
		strcpy(m[i],val[i]);
	}
	for(i=0;i<z+1;i++){
		if(n[i]>=n[i+1]){
			n[i+1]=n[i];
		    strcpy(val[i+1],val[i]);
		}
	}
	for(i=0;i<z+1;i++){
		if(x[i]<=x[i+1]){
			x[i+1]=x[i];
			strcpy(m[i+1],m[i]);
		}
	}   
	puts(val[z]);
	puts(m[z]);
	return 0;
}
