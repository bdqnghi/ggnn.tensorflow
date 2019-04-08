int main()
{
	int n,i,sum=0,j,k;
	int left[4]={0,0,0,0};
	cin>>n;
	for(i=1;i<=n;i++){
		k=i;j=0;
                left[3]=k%7;
		while(k!=0){                   //??????????????7
			left[j]=k%10;
			k=k/10;j++;}
		if(left[0]!=7&&left[1]!=7&&left[2]!=7&&left[3]!=0)//?????7???????sum?
			sum+=i*i;}
	cout<<sum<<endl;
	return 0;
}