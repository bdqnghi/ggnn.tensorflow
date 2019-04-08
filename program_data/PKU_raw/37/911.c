int main()
{
	char ltr[100000];
	int n;
	int i;
	char *p,*t;
	int count=0;
	int k=0;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",ltr);
		for(p=ltr;p<ltr+strlen(ltr);p++){
			for(t=ltr;t<ltr+strlen(ltr);t++){
				if(*t==*p){
					count++;
				}
			}
			if(count==1){
				k++;
				printf("%c\n",*p);
				break;
			}
			count=0;
		}
		if(k==0){
			printf("no\n");
		}
		count=0;
		k=0;
	}
	return 0;
}