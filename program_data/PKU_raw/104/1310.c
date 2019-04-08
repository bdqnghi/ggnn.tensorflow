/*?? - ???*/ 



int main()
{
	int x,y,t;
	cin>>x>>y;
	if(x>y)
	{
		t=x;x=y;y=t;
	}
	int floorx,floory;
	floorx=floor(log(x)/log(2));//??x,y???? 
	floory=floor(log(y)/log(2));
	int i;
	for(i=floory-1;i>=floorx;i--) 
	    y=y%2==0?y/2:(y-1)/2;//x??????????x????x/2?x????(x-1)/2 
	for(i=floorx;i>=0;i--)
	{
		if(x!=y)
		{
			x=x%2==0?x/2:(x-1)/2;
			y=y%2==0?y/2:(y-1)/2;
		}
		else 
		{
			cout<<x<<endl;
			return 0;
		}
	}
	return 0;
}