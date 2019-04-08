int sum, a[101][101];
 void g0(int n)
{
	 if(n==1)return ;//??????????????0
	 else{
		int min;
	    for(int i=1;i<=n;i++)
			{
			min=a[i][1];
			for(int j=1;j<=n;j++)
					min=min<=a[i][j]?min:a[i][j];
			for(int j=1;j<=n;j++)
				a[i][j]-=min;
	        }//????????
	    for(int i=1;i<=n;i++)
				{
		min=a[1][i];
		for(int j=1;j<=n;j++)
				min=min<=a[j][i]?min:a[j][i];
		for(int j=1;j<=n;j++)
			a[j][i]-=min;
		        }//????????
	    sum+=a[2][2];//??
	    for(int i=2;i<=n-1;i++)
	    	for(int j=1;j<=n;j++)
	    		a[i][j]=a[i+1][j];//?????????????????
        for(int i=2;i<=n-1;i++)
	    	for(int j=1;j<=n;j++)
	    		a[j][i]=a[j][i+1];//?????????????
	 }
	 g0(n-1);//??????0??
}
int main(){
	int n;
cin>>n;
	for(int k=1;k<=n;k++){
	sum=0;
	memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++)
		   for(int j=1;j<=n;j++)
      cin>>a[i][j];
	g0(n);
	cout<<sum<<endl;
	}
	return 0;

}
