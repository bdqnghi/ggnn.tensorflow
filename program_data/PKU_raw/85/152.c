int main()
{
	char s[63]={'_','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0'};
	int i,j,k,n,b;
	char a[20][100];
	char m[2];
	gets(m);
	n=atoi(m);
	for(i=0;i<n;i++){
		b=0;
		gets(a[i]);
		for(k=0;k<53;k++){
			if(a[i][0]==s[k]){
				b++;
				break;
			}
		}
		for(j=1;j<strlen(a[i]);j++){
			for(k=0;k<63;k++){
				if(a[i][j]==s[k]){
					b++;
					break;
				}
			}
		}
		if(b==strlen(a[i])){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
	return 0;
}


	
