int main()
{
	char word_z[50],word_bz[50];
	scanf("%s%s",word_z,word_bz);
	int i,j,p=0,a,b;
	int n1,n2;
	n1=strlen(word_bz);
	n2=strlen(word_z);
	for(i=0;i<n1;i++){
		if(word_bz[i]==word_z[0]){
			a=b=i;
			break;
		}
	}
	for(j=0;j<n2;j++){
		if(word_bz[a]==word_z[j]){
			a++;
			p++;
		}
	}
	if(p==n2){
		printf("%d",b);
	}
	return 0;
}