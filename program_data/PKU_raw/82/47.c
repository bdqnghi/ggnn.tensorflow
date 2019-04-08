
int main()
{
	int i,j,n,k,e,max,a[100][2],b[100];
	for(i=0;i<100;i++){
		for(j=0;j<2;j++){
            a[i][j]=0;
		}	
	}
	for(i=0;i<100;i++){
		b[i]=0;
	}
	scanf("%d",&n);
	for (i=0;i<n;i++){
		for (j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	k=0;
         for(i=0;i<n;i++){
	   if((90<=a[i][0])&&(a[i][0]<=140)&&(60<=a[i][1])&&(a[i][1]<=90)){
		k=k+1;
		b[i]=k;
	    }

	   else{
		b[i]=k;
		k=0;
	   }
	}
		
	max=0;
	for(i=0;i<n;i++){
		if(max<b[i]){
		    max=b[i];
		}
	}
	printf("%d",max);
	return 0;
}
