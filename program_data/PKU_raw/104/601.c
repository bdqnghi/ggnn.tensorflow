void main()
{
	int x,y,i,j,c=0,m,n;
	int a[50],b[50];
	scanf("%d %d",&x,&y);
	a[0]=x;
	b[0]=y;
	for(i=1;i<50;i++){
		if(x==1){
			m=i;
			break;
		}
		else{
			a[i]=x/2;
			x=x/2;
		}
	}
	for(i=1;i<50;i++){
		if(y==1){
			n=i;
			break;
		}
		else{
			b[i]=y/2;
			y=y/2;
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i]==b[j]){
				printf("%d",a[i]);
				c=1;
				break;
			}
		}
		if(c==1){
			break;
		}
	}
}