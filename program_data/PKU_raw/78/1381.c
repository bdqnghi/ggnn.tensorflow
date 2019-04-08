int main()
{
	int a[4],b[5]={10,20,30,40,50},i,j,k,l,m;
	for(i=0;i<5;i++)
	{
		a[0]=b[i];
		for(j=0;j<5;j++)
		{
			a[1]=b[j];
			for(k=0;k<5;k++)
			{
				a[2]=b[k];
				for(l=0;l<5;l++)
				{
					a[3]=b[l];
					if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&a[0]+a[1]==a[2]+a[3]&&a[0]+a[3]>a[1]+a[2]&&a[0]+a[2]<a[1])
						break;
				}
				if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&a[0]+a[1]==a[2]+a[3]&&a[0]+a[3]>a[1]+a[2]&&a[0]+a[2]<a[1])
						break;
			}
			if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&a[0]+a[1]==a[2]+a[3]&&a[0]+a[3]>a[1]+a[2]&&a[0]+a[2]<a[1])
						break;
		}
		if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&a[0]+a[1]==a[2]+a[3]&&a[0]+a[3]>a[1]+a[2]&&a[0]+a[2]<a[1])
						break;
	}
	    cout<<"l "<<a[3]<<endl;
		cout<<"q "<<a[1]<<endl;
		cout<<"z "<<a[0]<<endl;
		cout<<"s "<<a[2]<<endl;
	return 0;
}