int main()
{
    int a[50000],b[50000],n,c[10000],i,j,x=0,y=0;
	scanf("%d",&n);
	for(i=0;i<10000;i++) c[i]=0;
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<10000;j++){
			if((j>=a[i])&&(j<b[i])) c[j]=1;
		}
	}
	x=a[0];
	y=b[0];
	for(i=0;i<n;i++){
		if(x>=a[i]) x=a[i];
		if(y<=b[i]) y=b[i];
	}
	j=0;
	for(i=x;i<y;i++){
		if(c[i]!=1){
		   printf("no");
		   j++;
		   break;
		}
		
	}
	if(j==0) printf("%d %d",x,y);

		
	
    return 0;

}
