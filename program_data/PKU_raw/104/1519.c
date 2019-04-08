//*********************
//???***************
int main()
{
	int x,y;
	int ax[1000],ay[1000];
	cin>>x>>y;
	if(x==1||y==1)
		cout<<"1"<<endl;
	else
	{
	if(x>1)
	{
		ax[0]=x;
		if(x%2==0)
			ax[1]=x/2;
		else 
			ax[1]=(x-1)/2;
		for(int i=2;;i++)
		{
			if(ax[i-1]%2==0)
				ax[i]=ax[i-1]/2;
			if(ax[i-1]%2!=0)
				ax[i]=(ax[i-1]-1)/2;
			if(ax[i-1]==1)
				break;
				
		}
	}
	int temp;
	if(y>1)
	{
		ay[0]=y;
		if(y%2==0)
			ay[1]=y/2;
		else 
			ay[1]=(y-1)/2;
		for(int i=2;;i++)
		{
			if(ay[i-1]%2==0)
				ay[i]=ay[i-1]/2;
			if(ay[i-1]%2!=0)
				ay[i]=(ay[i-1]-1)/2;
			if(ay[i-1]==1)
				{ temp=i;
			break;}
		}
	}
	int counter=0;
	for(int l=0;;l++)
	{
		for(int k=0;k<=temp;k++)
		{
			if(ax[l]==ay[k])
				{
					cout<<ax[l]<<endl;
					counter=1;
					break;
				}
		}
		if(counter==1)
			break;
	}
	}
	return 0;
}
