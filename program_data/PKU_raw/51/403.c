int main(){
	int n,a[500],i,j,k,t,max;
	char s[500];
	scanf("%d\n",&n);
	gets(s);
	for(i=0;i<strlen(s);i++){
		a[i]=1;
		for(j=i+1;j<strlen(s);j++){
			t=1;
			for(k=0;k<n;k++)
				if(s[i+k]!=s[j+k])
					t=0;
			if(t==1)
				a[i]++;
		}
	}
	t=0;
	for(i=0;i<strlen(s);i++)
		if(a[i]>1){
			t=1;
			break;
		}
	if(t==0)
		printf("NO");
	else{
		max=2;
		for(i=0;i<strlen(s);i++)
			if(a[i]>max)
				max=a[i];
		printf("%d\n",max);
		for(i=0;i<strlen(s);i++)
			if(a[i]==max){
				for(j=i;j<i+n;j++)
					printf("%c",s[j]);
				printf("\n");
			}
	}
	return 0;
}