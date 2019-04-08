int main()
{
	long int b,i=0,j=0,n_number[500],decdec=0,a2[10],k,ans[500],l;
	int mi;
	double a;
	char n[500],ans2[500],a1[10];
	a1[1]=48;
	while((a1[i]=getchar())>=48)   //??a
	{
		i++;
	}
	a2[0]=a1[0]-48;
	a2[1]=a1[1]-48;
	if(a2[1]>=0&&a2[1]<=9) a=a2[0]*10+a2[1];
	else a=a2[0];
	i=0;
	while((n[i]=getchar())>=48) i++;  //??n
    cin>>b;  //??b
	i--;
	for(j=0;j<=i;j++)
	{
		if(n[j]>=48&&n[j]<=57) n_number[j]=n[j]-48;
		else if(n[j]>=65&&n[j]<=90) n_number[j]=n[j]-55;
		else n_number[j]=n[j]-87;
	}
	mi=i;
	for(l=0;l<=i;l++)
	{
		decdec=decdec+n_number[l]*pow(a,mi);
		mi=mi-1;
	}  //??????10??????
	if(decdec==0) cout<<"0";
	else
	{
	k=0;
	while(decdec>0)
	{
		ans[k]=decdec%b;
		decdec=decdec/b;
		k=k+1;
	}  //????????????b??????????
	k--;
	for(j=0;j<=k;j++)
	{
		if(ans[j]>=0&&ans[j]<=9) ans2[j]=ans[j]+48;
		if(ans[j]>=10&&ans[j]<=35) ans2[j]=ans[j]+55;
	}  //???????????????????11?35??
	for(j=k;j>=0;j--)
	{
		cout<<ans2[j];
	}  //??????
	}
	return 0;
}