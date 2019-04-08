int main()
{
int n,i;
cin>>n;
int a[40]={0};
a[0]=1;
while(n)
{
	int j=0;
	for(i=0;i<40;i++)
	{
		a[i]=2*a[i]+j;
		j=0;
		if(a[i]>9)
		{
			a[i]=a[i]-10;
			j=1;
		}
	}
	n--;
}
for(i=39;i>=0;i--)
	if(a[i]!=0)
		break;
for(;i>=0;i--)
	cout<<a[i];
return 0;
}
