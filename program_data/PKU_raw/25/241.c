int main ()
{
	int m=1,n,i,c=0,sz[1000],p,j,b;
	scanf("%d",&n);
	if(n<=30){
	    for(i=0;i<n;i++){
			m*=2;
		}
	printf("%d",m);
	}
	else{
		sz[0]=4;
		sz[1]=2;
		sz[2]=8;
		sz[3]=1;
		sz[4]=4;
		sz[5]=7;
		sz[6]=3;
		sz[7]=7;
		sz[8]=0;
		sz[9]=1;
		p=10;
		b=p;
		for(i=0;i<n-30;i++){
			c=0;
			for(j=0;j<p;j++){
			   sz[j]=sz[j]*2+c;
			   if(sz[j]>=10&&j<p-1){
				  c=1;
				  sz[j]=sz[j]-10;
			   }
			   else if(sz[j]<10){
				 c=0;
			   }
			   else if(sz[p-1]>=10){
				  sz[p-1]=sz[p-1]-10;
				  sz[p]=1;
				  b=p+1;
			   }
			}
			p=b;
		}

		for(i=p-1;i>=0;i--){
			printf("%d",sz[i]);
		}
	}
		

	return 0;
}