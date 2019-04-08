//????
int main()
{
	int n,i,j;
	double max=0,lmax,a[100],b[100],s[100][100];
    cin>>n;                                                      //????
	for(i=0;i<n;i++)
	   cin>>a[i]>>b[i];                                          //??????
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{s[i][j]=pow((a[i]-a[j]),2)+pow((b[i]-b[j]),2);          //?????????????
		if(s[i][j]>max) max=s[i][j];                             //?????????????
		}
	}
    lmax=sqrt(max); 
	cout<<fixed<<setprecision(4)<<lmax<<endl;                                        //????????
	return 0;
}