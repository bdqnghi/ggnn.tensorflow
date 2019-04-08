
int main()
{
	int n,a,b,t;
	int s[100]={0},e[100]={0};
	int i,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a<=140&&a>=90&&b>=60&&b<=90){
			s[i]=1;
		}
	}
	for(i=0;i<n;i++){	
		if(s[i]==0)
			k++;
	    if(s[i]==1)
		   e[k]++;
		
	}
	for(i=1;i<=k;i++){
			if(e[i]>e[0])
			  e[0]=e[i];
	}
	printf("%d",e[0]);
	return 0;
}