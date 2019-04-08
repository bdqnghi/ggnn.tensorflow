int main()
{
	char sen[1000];
	gets(sen);
	char danci[50][100];
	int i,k,n,len;
	k=0;
	n=0;
	len=strlen(sen);
	for(i=0;i<len;i++){
		if(sen[i]!=' '){
			danci[n][k]=sen[i];
			k++;
		}
		else{
			danci[n][k]='\0';
			n++;
			k=0;
		}
	}
	danci[n][k]='\0';
	int max = 0;
	int min=0;
for (i=1; i<n+1; i++) {
if (strlen(danci[i]) < strlen(danci[min])) {
min = i;
}
if (strlen(danci[i]) > strlen(danci[max])) {
max = i;
}
}
/* ??????? */
puts(danci[max]);
puts(danci[min]);
return 0;
}