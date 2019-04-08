
int main()
{
	char str[50][100];
	int length[50];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++){
		length[i] =strlen(str[i]);
		if (str[i][length[i]-1]=='r'||str[i][length[i]-1]=='y'){
			for(j=length[i]-2;j<100;j++){
				str[i][j] = '\0';
			}
			printf("%s\n",str[i]);
		}
		else if (str[i][length[i]-1]=='g'){
			for(j=length[i]-3;j<100;j++){
				str[i][j] = '\0';
				
			}
			printf("%s\n",str[i]);
		}
	}
	return 0 ;
}
