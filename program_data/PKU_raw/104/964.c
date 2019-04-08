int main()
{
	int s,m,n,i,j,t,m1,n1,q=0;
	int a[100];
	int b[100];
	scanf("%d %d",&m,&n);
	m1=m;
	n1=n;
	if(m==1||n==1){
		printf("1");
		return 0;
	}
	if(m==n){
		printf("%d",m);
		return 0;
	}
	a[0]=m;
	b[0]=n;
	for(i=1;;i++){
		if(m1/2==0){
			break;
		}
		m1=m1/2;
		a[i]=m1;
	}
	for(j=1;;j++){
		if(n1/2==0){
			break;
		}
		n1=n1/2;
		b[j]=n1;
	}
	if(m>n){
		s=i;
		t=j;
		for(i=0;i<s;i++){
			for(j=0;j<t;j++){
				if(a[i]==b[j]){
					printf("%d",a[i]);
					q=1;
					break;
				}
			}
			if(q==1)
				break;
		}
	}
	if(m<n){
		s=i;
		t=j;
		for(i=0;i<t;i++){
			for(j=0;j<s;j++){
				if(a[j]==b[i]){
					printf("%d",a[j]);
					q=1;
					break;
				}
			}
			if(q==1)
				break;
		}
	}
	return 0;
}
