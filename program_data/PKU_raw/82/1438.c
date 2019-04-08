int main()
{
	int i,n;
	int a[max],b[max];
	int c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			c++;
		
		
		if(c>=d){
			d=c;
		}
		}
		else{
			c=0;
		
		}
	}
	printf("%d",d);
	return 0;
}
		

			
		