int main()
{
	int n,i,a[2000],max=0,t,b[30]={0},j,m;
	char str[1000][30];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %s",&a[i],str[i]);
		for(j=0;j<strlen(str[i]);j++){
			m=str[i][j]-64;
			b[m]++;
	}
	}
	for(i=1;i<26;i++)if(b[i]>max){
		max=b[i];
		t=i;
	}
	printf("%c\n%d\n",t+64,max);
	for(i=0;i<n;i++){
		for(j=0;j<strlen(str[i]);j++)
			if(str[i][j]==t+64)printf("%d\n",a[i]);
	}
	return 0;
}
