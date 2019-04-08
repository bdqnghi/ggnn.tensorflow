int main(int argc,char*argv[])
{
	int n,i,m=0,t=0;
	char word[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",word);
		t+=strlen(word);
		m++;
		if(m==1){
			printf("%s",word);
		}else{
			if((t+m-1)<=80){
				printf(" ");
				printf("%s",word);
			}else{
				printf("\n");
				printf("%s",word);
				m=1;
				t=strlen(word);
			}
		}
	}
	return 0;
}