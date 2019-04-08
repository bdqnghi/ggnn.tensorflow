int main()    
{
char s[5000];
char t[100][50]={0};
int i,j,k,index,max,min;
gets(s);
    index=0;
	for(i=0;;i++){
		for(k=0;;){
			if(s[index]!=' '&&s[index]!=0){
				t[i][k]=s[index];
				index++;
				k++;
			}else{
				index++;
				break;
			}
		}
		if(s[index-1]==0){
			break;
		}
	}
	max=min=0;
	for (j=1; j<=i; j++) {
        if (strlen(t[j]) < strlen(t[min])) {
            min = j;
        }
        if (strlen(t[j]) > strlen(t[max])) {
            max = j;
        }
    }
	puts(t[max]);
    puts(t[min]);
	return 0;
}
