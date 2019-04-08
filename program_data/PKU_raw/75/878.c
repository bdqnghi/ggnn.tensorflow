int main()
{
	int x[1000],y[1000],i=1,j,k,num[1000]={0},max=0;
	cin>>x[0];
	while(cin.peek()!='\n'){
		cin.get();
		cin>>x[i++];
	}
	for(j=0;j<i;j++){
		cin.get();
		cin>>y[j];
	}
	for(k=0;k<1000;k++)
	     for(j=0;j<i;j++)
		 {
			 if(k>=x[j]&&k<y[j])
				 num[k]++;
		 }
	for(j=0;j<1000;j++)
	    if(num[j]>max)max=num[j];
	cout<<i<<" "<<max;
     return 0;
}

