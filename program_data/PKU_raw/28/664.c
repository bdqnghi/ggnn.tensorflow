

int main(){
	char a[1000],words[1000][1001];
	gets(a);
    int n,k,i;
	int len[300];

    n = 0; k = 0;
    
   for (i = 0; a[i] != 0; i++) {
        if (a[i] == ' ') {
            a[i] = '\0';
            strcpy(words[n], (a + k));
            n++;
            k = i + 1;
        }
    }
    strcpy(words[n], (a + k));
    n++;

    for(i=0;i<n-1;i++){
		len[i]=strlen(words[i]);
		if(len[i]!=0){
		    printf("%d,",len[i]);
		}
	}
	len[n-1]=strlen(words[n-1]);
	if(len[n-1]!=0){
	    printf("%d",len[n-1]);
	}
	return 0;
}
 
 
 
