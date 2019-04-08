
int main(int argc, char* argv[])
{	char a[100],b[100];
	scanf("%s%s",a,b);
	int i=0,j=0;
	for(i=0;i<strlen(b);i++){
		if(a[j]==b[i]){
			j++;
			if(j==strlen(a))printf("%d",i-j+1);
		}
		else j=0;
	}
	
	return 0;
}