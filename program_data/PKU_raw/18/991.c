int a[100][1000][1000];
int main()
{
	int n,i,j,min,p,q,k,h,sum=0;
	cin>>n;
	for(k=1;k<=n;k++)                             /*??n???*/
	{
	    for(i=1;i<=n;i++)
	    {
		    for(j=1;j<=n;j++)
		    {
			    cin>>*(a[k][i]+j);
		    }
	    }
	}
  for(p=1;p<=n;p++)                              /* ???????*/
  {
	  h=n;
	  for(q=1;q<=n-1;q++)                          /*???????*/
	  {
	  for(i=1;i<=h;i++)
	  {
		min=100000;
		for(j=1;j<=h;j++)
		{
			if(*(a[p][i]+j)<min)
				min=a[p][i][j];
		}
		for(k=1;k<=h;k++)
		{
			*(a[p][i]+k)=*(a[p][i]+k)-min;
		} 
	  }                                            /*?????*/
	  for(j=1;j<=h;j++)
	  {
		min=100000;
		for(i=1;i<=h;i++)
		{
			if(*(a[p][i]+j)<min)
				min=*(a[p][i]+j);
		}
		for(k=1;k<=h;k++)
		{
			*(a[p][k]+j)=*(a[p][k]+j)-min;
		} 
	  }   
	  sum+=a[p][2][2];
	  for(i=1;i<=h;i++)
        *(a[p][2]+i)=0;
	  for(j=1;j<=h;j++)
        *(a[p][j]+2)=0;
	  for(i=3;i<=h;i++)
	  {
		for(j=1;j<=h;j++)
		{
		*(a[p][j]+i-1)=*(a[p][j]+i);
		}
	}
	for(i=3;i<=h;i++)
	{
		for(j=1;j<=h;j++)
		{
		*(a[p][i-1]+j)=*(a[p][i]+j);
		}
	}
	h-=1;
	  }
	 cout<<sum<<endl;
	 sum=0;
  }


return 0;
}