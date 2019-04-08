int main()
{ 
int m,n,i,j,k,p,a[240],b[240],sum[100];
cin>>n;
for(i=0;i<100;i++)
{sum[i]=0;
}
  for(k=0;k<n;k++)
  {
	   for(i=0;i<240;i++)
	{
		a[i]=0;
	}
	    
	   cin>>m;
	   for(i=0;i<m;i++)
	{
		cin>>b[i];
			p=b[i];
			a[p-1]=1;
	}
	for(i=0;i<237;i++)
	{
		if(a[i]!=0)
		{
			for(j=237;j>=i+3;j--)
			{
				a[j]=a[j-3],a[j+1]=a[j-2],a[j+2]=a[j-1];
			}
			a[i+1]=1,a[i+2]=1,a[i+3]=1,a[i]=0;
			i=i+3;
		}
	}
	for(i=0;i<60;i++)
	{
		sum[k]=sum[k]+a[i];
	}
	sum[k]=60-sum[k];
	
   }
  cout<<sum[0];
  for(k=1;k<n;k++)
	  cout<<endl<<sum[k];
}