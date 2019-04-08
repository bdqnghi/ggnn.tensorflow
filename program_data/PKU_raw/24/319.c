int main(int argc, char* argv[])
{   char a[300];
    gets(a);
	int b,d[50];
	b=strlen(a);
	int i,j=0,k=0;
	char c[50][20];
	for(i=0;i<b;i++){
		if(a[i]!=' '){
			c[k][j]=a[i];
			j++;
		}
		else {
			c[k][j]='\0';
			k++;
			j=0;
		}
	}
	c[k][j]='\0';
	
		for(i=0;i<=k;i++){
	   d[i]=strlen(c[i]);
	}
		int max=d[0],min=d[0];
        for(i=0;i<=k;i++){
			if(d[i]>max)
				max=d[i];
			else if(d[i]<min)
				min=d[i];
		}
	  int h=0,e[10],f[10],g=0;
		for(i=0;i<=k;i++){
			if(d[i]==max){
                e[h]=i;
		      	h++;
			}
			else if(d[i]==min){
				f[g]=i;
				g++;
			}
		}
		printf("%s\n",c[e[0]]);
		printf("%s\n",c[f[0]]);
	return 0;
}

