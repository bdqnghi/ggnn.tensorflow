int main()
{
	int x,y,i,j,m=0,n=0,t;
	int a[1000],b[1000];
	scanf("%d %d",&x,&y);
	a[0]=x;b[0]=y;
		for(i=1;a[i-1]!=1;i++)
		{
			a[i]=x/2;
			x=x/2;
			m=m+1;
		}
		for(j=1;b[j-1]!=1;j++)
		{
			b[j]=y/2;
			y=y/2;
			n=n+1;
		}
		
		
		for(i=0;i<m;i++){
			for(j=0;j<n;j++) {
				if(a[i]==b[j]){
					t=1;
					break;
				}
			}
			if(t==1) {
				break;
			}
		}
		printf("%d\n",a[i]);
		return 0;
}
