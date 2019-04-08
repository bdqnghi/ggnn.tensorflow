
int main()
{
	char w[1000],ws[50][20]={0};
	int i;
    int len;
	int j=0,k=0;
	int mi=0,ma=0;
	gets(w);
	len=strlen(w);
	for(i=0;i<len;i++){
		if(w[i]!=' '){
			ws[j][k]=w[i];
			k++;
		}
		else if(w[i]==' '){
			j++;
			k=0;
		}
	}
	int min=strlen(ws[0]);
	int max=strlen(ws[0]);
	for(i=1;i<=j;i++){
		if(min>strlen(ws[i])){
			min=strlen(ws[i]);
			mi=i;
		}
		if(max<strlen(ws[i])){
			max=strlen(ws[i]);
			ma=i;
		}
	}
	printf("%s\n",ws[ma]);
	printf("%s\n",ws[mi]);	
	return 0;
}