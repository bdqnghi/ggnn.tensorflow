void main()
{
	int i,j;
	int n,m;
	int sum,num;
	int lon,wid;
	int c[100][100];
	scanf("%d",&n);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&(c[i][j]));
		}
		}
		for(i=0;i<n;i++){
			sum=0;
			for(j=0;j<n;j++){
				if(c[i][j]==0)
					sum+=1;
			
				if(sum>2)
					lon=sum;	 
		}
		}
		for(j=0;j<n;j++){
			num=0;
			for(i=0;i<n;i++){
				if(c[i][j]==0)
					num+=1;
                                     if(num>2)
					wid=num;
		            }
		}
			m=(lon-2)*(wid-2);
			printf("%d\n",m);
}

 

