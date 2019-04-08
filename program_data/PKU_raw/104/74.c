int main()
{
	int x,y,i,l2x,l2y,xx[10],yy[10];
	cin>>x>>y;
	l2x=log(x)/log(2);
	l2y=log(y)/log(2);
	if(x==8)	l2x=3;
	if(y==8)	l2y=3;
	xx[l2x]=x-pow(2,l2x);
	yy[l2y]=y-pow(2,l2y);
	for(i=l2x-1;i>=0;i--)	xx[i]=xx[i+1]/2;
	for(i=l2y-1;i>=0;i--)	yy[i]=yy[i+1]/2;
	i=l2x;
	if(l2x>l2y)	i=l2y;
	for(;i>=0;i--)
	{
		if(xx[i]==yy[i])
		{
			cout<<(pow(2,i)+xx[i])<<endl;
			break;
		}
	}
	return 0;
}