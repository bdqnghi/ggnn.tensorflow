int main()
{
	int n,i,j,temp,countmax=0,count=0,a[305];
	float average=0,sum=0,max=0,dis[305];
	cin>>n;
	for (i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	average=sum/n; //???????sum????average
	
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	} //?????

	for (i=0;i<n;i++){
		dis[i]=fabs(a[i]-average);
		if (dis[i]>max) max=dis[i];
	} //???????????? ?????distance???

	for (i=0;i<n;i++){
		if (dis[i]==max) countmax++;
	} //?????????
	
	for (i=0;i<n;i++){
		if (dis[i]==max && count<countmax-1){
			cout<<a[i]<<","; count++;
		} //??????????? ??????
		else if (dis[i]==max && count+1==countmax) 
			cout<<a[i];
	} //???????


return 0;
}