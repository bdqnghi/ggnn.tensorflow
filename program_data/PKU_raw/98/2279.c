
int main()
{
	int n,i,len=0,m;
	char w[41];
	scanf("%d",&n);
	scanf("%s",w);
	m=strlen(w);
	len=m;
         printf("%s",w);
	for(i=1;i<n;i++){
		scanf("%s",w);
		m=strlen(w);
		len+=m+1;
		if(len>80){
			printf("\n%s",w);
			len=m;
		}
		else{
			printf(" %s",w);
		}
		}
	return 0;
}



