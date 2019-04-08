
int main()
{
	int n,i,s,max;
	int a[100];
	int b[100];
	int c[100];
	
	scanf("%d",&n);
	max=0;
	s=0;
	c[0]=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&(a[i]),&(b[i]));
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			c[s]++;
		}else{
			if(c[s]>max){
				max=c[s];
			}
			s++;
			c[s]=0;
		}
		if(c[s]>max){
				max=c[s];
			}
	}
	printf("%d\n",max);
	return 0;
}