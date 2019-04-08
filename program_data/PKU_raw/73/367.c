int main()
{
	int i,j,line=0,row=0,imax[6]={0},jmin[6]={2146796,2146796,2146796,2146796,2146796,2146796},a[6][6]={0};
	for(i=1;i<6;i++)
		for(j=1;j<6;j++)
			cin>>a[i][j];
	for(i=1;i<6;i++)
		for(j=1;j<6;j++)
		{
			if(a[i][j]>imax[i])
				imax[i]=a[i][j];
			if(a[i][j]<jmin[j])
				jmin[j]=a[i][j];
		}
	for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
		{
			if(imax[i]==jmin[j])
			{
				line=i;
				row=j;
			}
		}
	}
	if(imax[line]==jmin[row]&&line!=0&&row!=0)
		cout<<line<<" "<<row<<" "<<imax[line];
	else
		cout<<"not found";
	return 0;
}