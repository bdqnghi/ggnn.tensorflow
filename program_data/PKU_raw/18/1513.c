//***********************************
//*?????????
//***********************************
int main()
{
	int a[100][100];
	int k=1,n=0;
	cin>>n;
	for(k=1;k<=n;k++)                //??k?????n???????
	{
		int i=0,j=0,m;
		int result=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];     //??n???
		int min=0;
		for(m=n;m>1;m--)          //??m?????n-1???????
		{
            for(i=0;i<m;i++)
			{
				min=a[i][0];
				for(j=0;j<m;j++)
				{if(min>a[i][j])
				min=a[i][j];
				}              //????????
				for(j=0;j<m;j++)
					a[i][j]=a[i][j]-min;
			}                          //?????????
			for(j=0;j<m;j++)
			{
				min=a[0][j];
				for(i=0;i<m;i++)
				{if(min>a[i][j])
				min=a[i][j];
				}                    //????????
                for(i=0;i<m;i++)
					a[i][j]=a[i][j]-min;
			}                     //?????????
			result=result+a[1][1];         //?????a[1][1]??
			for(j=1;j<m-1;j++)
			a[0][j]=a[0][j+1];
			for(i=1;i<m-1;i++)
			{
				a[i][0]=a[i+1][0];
				for(j=1;j<m-1;j++)
					a[i][j]=a[i+1][j+1];
			}

		}                //???????
		
		cout<<result<<endl;
	}
	return 0;
}