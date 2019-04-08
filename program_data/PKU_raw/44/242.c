int f(int n)                       //??????????
{
	int i=1,a[100],k=0,m=0,p;
	
	p=abs(n);                   //????????
	do
	{
		a[i]=p%10;
		p=p/10;
		i++;
		k=k+1;
	}
	while(p!=0);             //????????????
	for(i=1;i<=k;i++)
	{
		m=m+a[i]*pow(10.00,(double)(k-i));
	}
	if(n>=0)
	{return(m);}
	else
	{return(-m);}          //??????????
}

int main()
{
	int a[7],i;
	for(i=1;i<=6;i++)
	{
		cin>>a[i];
		a[i]=f(a[i]);      //?????????
	}
	for(i=1;i<=6;i++)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}



