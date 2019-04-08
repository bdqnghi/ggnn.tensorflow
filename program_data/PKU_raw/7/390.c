int main()
{
	int i=0,j=0,k=0,s=0,a,b,c=0,m=0;
	char string[257],substring[256],replacement[256];
	gets(string);
	gets(substring);
	gets(replacement);
	a=strlen(string);
	b=strlen(substring);
	for(i=0;i<a;i++){
		k=0;
		if(string[i]==substring[0]){
			for(j=i;j<i+b;j++){
				if(string[j]==substring[j-i]) k++;
				else break;
			}
		}
		if(k==b){
			break;
		}
		m=i+1;
	}
	for(i=0;i<a;i++){
			if(i>=m&&i<b+m){
				printf("%c",replacement[i-m]);
			}
			else {
				printf("%c",string[i]);
			}
	}
	return 0;
}
