int main()
{
	int n,i,a,b,k=0,j=0,p;
	int sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			k++;
		}else{ 
			j++;
			sz[j]=k;
			k=0;
		}
	}
	for(p=0;p<j;p++){
		k=sz[p]>k?sz[p]:k;
	}
	printf("%d",k);
	return 0;
}

