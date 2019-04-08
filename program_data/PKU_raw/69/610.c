int main()
{
	char num[2][300]={'0'};
	int a[300]={0};
	scanf("%s",num[0]);
	scanf("%s",num[1]);
	int i,j;
	i=strlen(num[0]);
	j=strlen(num[1]);
	int k;
    if(i<=j){
		for(k=0;k<i;k++){
	   a[k]=(num[0][i-k-1]-'0')+(num[1][j-k-1]-'0');
		}
		for(k=i;k<j;k++){
       a[k]=num[1][j-k-1]-'0';
		}
	}
	else{
		for(k=0;k<j;k++){
			a[k]=(num[0][i-k-1]-'0')+(num[1][j-k-1]-'0');
		}
		for(k=j;k<i;k++){
			a[k]=num[0][i-k-1]-'0';
		}
	}
	for(k=0;k<=251;k++){
		if(a[k]>=10){
			a[k]=a[k]%10;
			a[k+1]=a[k+1]+1;
		}
	}

	for(k=251;k>0;k--){
		if(a[k]!=0) break;
	}
	for(;k>=0;k--){
		printf("%d",a[k]);
	}
}

	
		

