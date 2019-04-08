int main()
{
	char n[100],y[100];
	int m[100],x[100];
	int a,b,ten=0,i=0,j=0,k,l;
	cin>>a>>n>>b;
	l=strlen(n);
	for(i=0;i<l;i++)
	{
		if(n[i]>='0'&&n[i]<='9')
			m[i]=n[i]-48;
		else if(n[i]>='A'&&n[i]<='Z')
			m[i]=n[i]-55;
		else if(n[i]>='a'&&n[i]<='z')
			m[i]=n[i]-87;
		double pow(double x,double y);
		ten=ten+m[i]*(int)pow((double)a,(double)(l-1-i));
	}
	if(ten==0)
		cout<<"0";
	while(ten!=0)
	{
		x[j]=ten%b;
		ten=ten/b;
		if(x[j]>=0&&x[j]<=9)
			y[j]=x[j]+48;
		else if(x[j]>=10&&x[j]<=35)
			y[j]=x[j]+55;
		j=j+1;
	}
	for(k=j-1;k>=0;k--)
		cout<<y[k];
	cout<<endl;
	return 0;
}
