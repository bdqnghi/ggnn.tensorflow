void arrange(int *arrangearry,int nt,int kd_order)
{
	int flagi,flagj,temporary;
	if(kd_order==1)
	{
		for(flagi=nt-1;flagi>0;flagi--)
		{
			for(flagj=0;flagj<flagi;flagj++)
			{
				if(arrangearry[flagj]<arrangearry[flagj+1])
				{
					temporary=arrangearry[flagj];
					arrangearry[flagj]=arrangearry[flagj+1];
					arrangearry[flagj+1]=temporary;
				}
			}
		}
	}
}
int main()
{
	int n,ss[100],sz[100],i,j=0,h[100]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ss[i]>>sz[i];
		if(ss[i]>=90&&ss[i]<=140&&sz[i]>=60&&sz[i]<=90) h[j]++;
		else j++;
	}
	arrange(h,100,1);
	cout<<h[0];
	return 0;
}