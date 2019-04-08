
int judgeletter(char);
int judgeline(char);
int judgenum(char);
void emp(char *);

int main()
{
	int n,i,j,length;
	char s[81];
	scanf("%d",&n);
	gets(s);
	for(i=0 ; i<n ; i++){
		emp(s);
		gets(s);
		length = strlen(s);
		if( length == 1){
			printf("%d\n",( judgeletter(*s) || judgeline(*s) ) );
			continue;
		}else{
			if( ( judgeletter(*s) || judgeline(*s) ) == 0 ){
				printf("0\n");
				continue;
			}else{
				for(j=1 ; *(s+j) ; j++){
					if( ( judgeletter(*(s+j)) || judgeline(*(s+j)) || judgenum(*(s+j)) ) == 0 ){
						printf("0\n");
						break;
					}
				}
				if( j==length )
					printf("1\n");
			}
		}
	}
	
	return 0;
}

int judgeletter( char c)
{
	if( (c>='a' && c<='z') || (c>='A' && c<='Z') )
		return 1;
	else
		return 0;
}

int judgeline( char c )
{
	if( c == '_' )
		return 1;
	else
		return 0;
}

int judgenum( char c )
{
	if( c>='0' && c<='9' )
		return 1;
	else
		return 0;
}

void emp( char *s )
{
	int i;
	for(i=0 ; *(s+i) ; i++){
		*(s+i)='\0';
	}
}