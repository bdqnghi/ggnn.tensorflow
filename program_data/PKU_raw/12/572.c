int main()
{
	int n=0,k=0,j,i,a[16],m=0;
	do
	{
		for(i=0;i<=15;i++)
		{
			cin>>a[i];
			n++;
		if(a[i]==0)break;
		if(a[i]==(-1))break;
		}
                  if(a[0] == -1)break;
		for(j=0;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(a[j]==a[k]*2||a[k]==a[j]*2)
					m++;
			}
		}
		cout<<m<<endl;
		m=0;
		n=0;
	}while(a[0]!=(-1));
	return 0;
}



