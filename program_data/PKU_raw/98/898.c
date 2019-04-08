int main()
{
	int n,i,k=0,ll=0;
	char word[300][41];
	char **p;
	int len[300];
	int *l;
	l=len;
	p=word;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",word[i]);
		*(l+i)=strlen(word[i]);
	}
	for(i=0;i<n;i++){
		if(k==0){
			printf("%s",word[i]);
			k++;
			ll+=*(l+i);
		}
		else{
			if(ll+*(l+i)+1<=80){
				printf(" %s",word[i]);
				ll+=*(l+i)+1;
			}
			else{
				printf("\n%s",word[i]);
				ll=*(l+i);
			}
		}
	}
	return 0;
}

