
int main()
{
	int n,a[10][10],i,j,s,p,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		p=0;
		    cin>>a[i][0];
			for(j=1;j<=a[i][0];j++)
		    {
			   cin>>a[i][j];
		     }
			if(a[i][0]!=0)
		    {for(j=1;j<=a[i][0];j++)
		     {
			   p=a[i][j]+3*j;
			   if(p>63)
				   {
					   p=a[i][j-1]+3*j-3;
					   if(p>=60)
						   s=3-(p-60)+3*(j-2);
					   else
						   s=3*(j-1);
				   break;
			   }
			   else
				   if(p>=60)
					   s=3-(p-60)+3*(j-1);
				   else
				   s=3*j;
			}
			   m=60-s;
			   cout<<m<<endl;
	        }
		   else
			  cout<<"60"<<endl;
	}
	return 0;
}
