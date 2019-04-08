int main(){
	int a[300],n,i,j,he=0,temp,num=0;
	float pingjun,max;
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
		he+=a[i];
	}
	pingjun=(float)he/(float)n;
	for(i=n-1;i>=1;i--)
		for(j=0;j<=i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	for(i=0;i<=n-1;i++)
		if(abs(a[i]-pingjun)>max)
			max=abs(a[i]-pingjun);
	for(i=0;i<=n-1;i++)
		if(abs(abs(a[i]-pingjun)-max)<0.1)
		{
			num++;
			if(num==1)
				cout<<a[i];
			if(num>1)
				cout<<","<<a[i];
		}
	return 0;

}