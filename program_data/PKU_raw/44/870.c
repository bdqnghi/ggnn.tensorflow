int main()
{
	int i,a[6],b[6];
	int reverse(int n);
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++){
		b[i]=reverse(a[i]);
	}
	for(i=0;i<6;i++){
		printf("%d\n",b[i]);
	}
	scanf("%d",&i);
	return 0;
}
int reverse(int n)
{
	int d[50],j,k,m;
	j=0;
	if(n>0){
		while(n>=10){
			d[j]=n%10;
			n=(n-d[j])/10;
			j++;
		}
		d[j]=n;
		m=0;
		for(k=0;k<=j;k++){
			m=m+d[k]*pow(10,j-k);
		}
	}
	if(n==0){
		m=0;
	}
	if(n<0){
		j=0;
		while(n<=-10){
			d[j]=n%10;
			n=(n-d[j])/10;
			j++;
		}
		d[j]=n;
		m=0;
		for(k=0;k<=j;k++){
			m=m+d[k]*pow(10,j-k);
		}
	}
	return m;
}