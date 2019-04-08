char word[200];
 
int main(int argc, char* argv[])
{
	int i,j,n,e[50],len[50],l,a,b;
	char word[300];
	gets(word);
	n=(int)strlen(word);
    word[n]=' ';
	e[0]=-1;
	j=0;
	for(i=0;i<=n;i++){
		if(word[i]==' '){
			j++;
			e[j]=i;
			len[j]=e[j]-e[j-1]-1;
		}
	}
	l=j;
	for(j=1;j<l;j++){
		for(i=j+1;i<=l;i++){
			if(len[i]>len[j]){
				a=len[j];
				len[j]=len[i];
				len[i]=a;
				b=e[j];
				e[j]=e[i];
				e[i]=b;
			}
		}
	}
	for(i=(e[1]-len[1]);i<e[1];i++){
		printf("%c",word[i]);
	}
	printf("\n");
    for(j=1;j<l;j++){
		for(i=j+1;i<=l;i++){
			if(len[i]<len[j]){
				a=len[j];
				len[j]=len[i];
				len[i]=a;
				b=e[j];
				e[j]=e[i];
				e[i]=b;
			}
		}
	}
	for(i=(e[1]-len[1]);i<e[1];i++){
		printf("%c",word[i]);
	}
	printf("\n");
	return 0;
}

