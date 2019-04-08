int ss(int );
int hw(int );
main()
{
	int a,b,i,m[100],j=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		if(ss(i)==1&&hw(i)==i){
			m[j]=i;
			j++;}}
		if(j==0)
			printf("no");
        else {
			for(i=0;i<j-1;i++)
				printf("%d,",m[i]);
			printf("%d",m[j-1]);}
return 0;
		}

			
				



	int ss(int n)
	{
		int i,p=1;
		for(i=2;i<n;i++){
			if(n%i==0){
				p=0;break;}}
		return p;}
	

	int hw(int n)
	{
		int i,d=0,j,p=0;
		
			for(i=0;n>0;i++){
			j=n%10;
			n/=10;
			d=10*d+j;}
		if(d==n){
			p=1;}
		return d;
	}
