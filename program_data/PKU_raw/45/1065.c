int main()
{
	char a[2][50];
	int b[50];
	int i,len1,len2,j=0,n,sum[50]={0},x,k;
	for(i=0;i<2;i++){
			scanf("%s",a[i]);
		}
	len1=strlen(a[0]);
	len2=strlen(a[1]);
	for(i=0;i<len2;i++){
		if(a[0][0]==a[1][i]){
			b[j]=i;
			j++;
		}
	}
	for(n=0;n<j;n++){
		for(i=b[n],k=0;i<b[n]+len1,k<len1;i++,k++){
			if(a[0][k]!=a[1][i]){
				sum[n]+=1;
			}
		}
	}
	for(n=0;n<j;n++){
		if(sum[n]==0){
			x=b[n];
			break;
		}
	}
	printf("%d",x);
	return 0;
}