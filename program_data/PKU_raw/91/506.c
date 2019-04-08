int main(){
	char s[105]={0},ss[105]={0};
	int i,j,x;
	gets(s);
	x=strlen(s);
	j=0;

	for(i=1;i<x;i++){
		if(j!=x-1){
			ss[j]=s[i-1]+s[i];
			j++;
		}
	    if(j==x-1){
			ss[x-1]=s[x-1]+s[0];
		}

	}
	printf("%s",ss);



	
		return 0;
	}

				
	
