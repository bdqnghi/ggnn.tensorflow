

int main()
{
	int i,a;
	int b=0;
	double n,k;
	char l1[500];
	char l2[500];
	a=0;
    scanf("%lf",&n);
	scanf("%s",l1);
	scanf("%s",l2);
	for(i=0;i<strlen(l1);i++){
			if(l1[i]<'A'||l1[i]>'Z'||l2[i]<'A'||l2[i]>'Z'){
				b=1;
			}
		}
	if(strlen(l1)!=strlen(l2)||b==1){
		printf("error");
	}else{
		for(i=0;i<strlen(l1);i++){
			if(l1[i]==l2[i]){
				a++;
			}
		}
		k=1.0*a/strlen(l1);
		if(k>n){
			printf("yes");
		}else{
			printf("no");
		}
	}
	return 0;
}