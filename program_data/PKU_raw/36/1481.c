int main()
{
	char ch[100],sh[100];
	int a[300]={0},b[300]={0};
	int len1,len2;
	scanf("%s %s",&ch,&sh);
	int i,j;
	len1=strlen(ch);
	len2=strlen(sh);
	if(len1!=len2){
		printf("NO\n");
	}else{
	for(i=0;i<=len1;i++){
		int m;
		m=ch[i];
		a[m]++;
	}
	for(j=0;j<=len2;j++){
		int n;
		n=sh[j];
		b[n]++;
	}
	int k,h=0;
	for(k=0;k<=299;k++){
		if(a[k]!=b[k]){
			printf("NO\n");
			break;
		}else{
			h++;
		}
	}
		if(h==300)
			printf("YES\n");
	}
	return 0;
}