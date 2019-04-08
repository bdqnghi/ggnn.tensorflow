
int main(int argc, char* argv[])
{
	int n,i,j,k,l,a;
	char s[255];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		a=strlen(s);
		if (s[a-1]=='r'&&s[a-2]=='e')
		{for(j=0;j<a-2;j++){
			printf("%c",s[j]);
		}
		printf("\n");
		}
		
		if (s[a-1]=='g'&&s[a-2]=='n'&&s[a-3]=='i')
		{for(k=0;k<a-3;k++){
			printf("%c",s[k]);
			
		}
		printf("\n");
		}
	
		if (s[a-1]=='y'&&s[a-2]=='l')
		{for(l=0;l<a-2;l++){
			printf("%c",s[l]);
		}
		printf("\n");
		}
	}
	return 0;
}
