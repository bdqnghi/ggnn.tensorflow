
int main()
{
	char s[256],a[256],b[256];
	gets(s);
	gets(a);
	gets(b);
	int i,j,k,t=-2;
	int lengths,lengtha,lengthb;
	lengths=strlen(s);
	lengtha=strlen(a);
	lengthb=strlen(b);

	for(i=0;i<lengths;i++){
		k=0;
		for(j=0;j<lengtha;j++){
			if(a[j]==s[i+j]){
				k++;
			}
		}
			
		if(k==lengtha){
			t=i;
			break;
		}
	}
	if(t!=-2){
		for(i=0;i<t;i++){
			printf("%c",s[i]);
		}
	printf("%s",b);
		for(i=t+lengthb;i<lengths;i++){
			printf("%c",s[i]);
		}
	}
	else{
		puts(s);
	}
	return 0;
}