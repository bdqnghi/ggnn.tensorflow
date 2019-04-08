int main()
{
	int n,i,j,sum,a[200][3],yue[13];
	cin>>n;
	yue[1]=yue[3]=yue[5]=yue[7]=yue[8]=yue[10]=yue[12]=31;
	yue[4]=yue[6]=yue[9]=yue[11]=30;
	for(i=0;i<n;i++)
	{
		sum=0;
		yue[2]=28;
		cin>>a[i][0]>>a[i][1]>>a[i][2];
		if(a[i][0]%400==0||a[i][0]%100!=0&&a[i][0]%4==0)
			yue[2]=29;
		for(j=a[i][1];j<a[i][2];j++)
			sum+=yue[j];
		for(j=a[i][2];j<a[i][1];j++)
			sum+=yue[j];
		if(sum%7==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}