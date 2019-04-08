int main()
{
	char a[300];
	int num=0,l,i,j,count[300]={0};
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]>='a'&&a[i]<='z'){
			num++;
			count[i]=1;
			for(j=i+1;j<l;j++){
				if(a[j]==a[i]){
					count[i]++,a[j]='0';
				}
			}
		}
	}
	for(i=97;i<=122;i++){
		for(j=0;j<l;j++){
			if(i==a[j]) printf("%c=%d\n",a[j],count[j]);
		}
	}
	if(num==0) printf("No");
	return 0;
}