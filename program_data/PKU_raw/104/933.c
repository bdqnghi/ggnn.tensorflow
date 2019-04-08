int origin(int a) 
{ 
	int i,j,k,n,p;
	for(i=0;i<=11;i++)
		if(pow(2,i)<=a&&pow(2,i+1)-1>=a)n=i+1;
	j=a-pow(2,n-1)+1;
	k=(j+1)/2;
    p=pow(2,n-2)+k-1;
	return p;
}
int main()
{
	int m[12],n[12];
	
	int n1,n2,i,j,min;
	int x,y;
	cin>>x>>y;
    for(i=0;i<=11;i++)
		if(pow(2,i)<=x&&pow(2,i+1)-1>=x)n1=i+1;
    for(i=0;i<=11;i++)
		if(pow(2,i)<=y&&pow(2,i+1)-1>=y)n2=i+1;
    
	if(n1==1||n2==1)cout<<1;
	else
	{
	m[n1]=x;
	n[n2]=y;
	m[n1+1]=-1;
	n[n2+1]=-2;
	if(x>y)min=x;
	else min=y;
	for(i=n1-1;i>=1;i--)
		m[i]=origin(m[i+1]);
	for(i=n2-1;i>=1;i--)
		n[i]=origin(n[i+1]);
	for(j=1;j<=min;j++)
		if(m[j]==n[j]&&m[j+1]!=n[j+1])
		{
			cout<<m[j]<<endl;
			break;
		}
	}
	
   return 0;
}
         
	

