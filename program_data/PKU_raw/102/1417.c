
int main()
{
	int n,i,j;
	double h,t,f[40],m[40];
	char sex[6];
	cin>>n;
	int count1=0,count2=0;
	for(i=0;i<n;i++){
		cin>>sex>>h;
		if(sex[0]=='f')
			f[count1++]=h;
		else
			m[count2++]=h;
	}                                  //??count1?count2??????????????
	for(i=0;i<count1-1;i++)             //???????????,??
		for(j=count1-1;j>i;j--)
			if(f[j]>f[j-1])
			{t=f[j];f[j]=f[j-1];f[j-1]=t;}
	for(i=0;i<count2-1;i++)             //???????????
		for(j=count2-1;j>i;j--)
			if(m[j]<m[j-1])
			{t=m[j];m[j]=m[j-1];m[j-1]=t;}
	cout<<fixed<<setprecision(2);      //????????
	for(i=0;i<count2;i++)              //??????
		cout<<m[i]<<' ';
	for(i=0;i<count1-1;i++)            //??????
		cout<<f[i]<<' ';
	cout<<f[count1-1];
	return 0;
}