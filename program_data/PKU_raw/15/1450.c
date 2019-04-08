int main()
{
	int n,i,j,b,c,d,e,f;
	char a[1000][1000];
	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
	}}
    c=-1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==0)
			{c=i;d=j;
			break;}}
		if(c!=-1){break;}
	}
		
	e=-1;
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(a[i][j]==0){
				e=i;f=j;break;}}
		if(e!=-1){
			break;}
	}

	b=(e-c-1)*(f-d-1);
	printf("%d",b);
	return 0;
}


		
 