

int main()
{
	float sum1=0,c[11];
	int a[11],b[11],n,sum2=0,i;
cin>>n;
	for(i=1;i<=n;i++)
	{
	cin>>a[i];
sum2=sum2+a[i];
	
	}
for(i=1;i<=n;i++)
	{
	cin>>b[i];
if(b[i]>=90)
{
  c[i]=4.0;
}
else
if(b[i]>=85)
{
  c[i]=3.7;
}
else
if(b[i]>=82)
{
  c[i]=3.3;
}
else
if(b[i]>=78)
{
  c[i]=3.0;
}else
if(b[i]>=75)
{
  c[i]=2.7;
}else
if(b[i]>=72)
{
  c[i]=2.3;
}else
if(b[i]>=68)
{
  c[i]=2.0;
}else
if(b[i]>=64)
{
  c[i]=1.5;
}else
if(b[i]>=60)
{
  c[i]=1.0;
}else
{
c[i]=0;
}
sum1=sum1+c[i]*a[i];
	
	}
cout<<fixed;
cout.precision(2);
	cout<<sum1/sum2<<endl;
	
	return 0;
}
