int main()
{
	int n,max,t,i,j,a[1000],l,b[30]={0},c;
	char str[1000][20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %s",&a[i],str[i]);
		l=strlen(str[i]);
		for(j=0;j<l;j++){
			b[str[i][j]-64]++;
		}
	}
	for(i=1;i<27;i++){
		if(b[i]>max){
			max=b[i];
			t=i;
		}
	}
	printf("%c\n%d\n",t+64,b[t]);
	for(i=0;i<n;i++){
		l=strlen(str[i]);
		for(j=0;j<l;j++){
			if(str[i][j]==t+64)
				printf("%d\n",a[i]);
		}
	}
	return 0;
}