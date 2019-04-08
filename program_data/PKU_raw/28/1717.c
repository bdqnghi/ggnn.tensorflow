int main()
{
	char s[N];
	int i,j,m;
	gets(s);
	for(i=0;i<N;i++){
		if(s[i]=='\0')
			break;
	}
	for(m=0,j=0;j<=i;j++){
		if(s[j]!='\0'&&s[j]!=' '){
			m++;
		}
	    else if(s[j]==' '){
			if(m!=0){
		        printf("%d,",m);
			    m=0;
			}
		}
		else if(s[j]=='\0'){
			printf("%d",m);
			break;
		}
	}
	return 0;
}

