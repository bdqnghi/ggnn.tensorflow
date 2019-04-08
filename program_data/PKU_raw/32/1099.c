
int main(int argc, char *argv[])
{
	char a[100]={'0'},b[100]={'0'};
	int n,i,la,lb,k,sub[101]={0},p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(k=1;k<=100;k++){
			sub[k]=0;
		}
		scanf("%s",a);scanf("%s",b);
		la=strlen(a);lb=strlen(b);
		for(k=1;k<=lb;k++){
			if(a[la-k]>=b[lb-k])sub[k]=a[la-k]-b[lb-k];
			else{
				sub[k]=a[la-k]+10-b[lb-k];
				a[la-(k+1)]=a[la-(k+1)]-1;
			}
		}
		for(k=lb+1;k<=la;k++){
			sub[k]=a[la-k]-48;
		}
		printf("\n");
		for(k=100;k>0;k--){
			if(sub[k]!=0){
				p=k;
				break;
			}
		}
		for(k=p;k>0;k--){
			printf("%d",sub[k]);
		}
	}
	return 0;
}