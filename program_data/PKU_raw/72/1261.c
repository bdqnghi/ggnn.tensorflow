int main()
{
	int m,n,i,j;
	int a[25][25];
	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		cin>>a[i][j];
	for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				if((i==0)&&(j==0))
				{
					if((a[0][0]>=a[0][1])&&(a[0][0]>=a[1][0]))
						cout<<i<<' '<<j<<endl;
				}
				else if((i==0)&&(j==n-1))
				{
					if((a[0][n-1]>=a[0][n-2])&&(a[0][n-1]>=a[1][n-1]))
						cout<<i<<' '<<j<<endl;
				}
				else if((i==m-1)&&(j==n-1))
								{
									if((a[m-1][n-1]>=a[m-1][n-2])&&(a[m-1][n-1]>=a[m-2][n-1]))
										cout<<i<<' '<<j<<endl;
								}
				else if((i==m-1)&&(j==0))
												{
													if((a[m-1][0]>=a[m-1][1])&&(a[m-1][0]>=a[m-2][0]))
														cout<<i<<' '<<j<<endl;
												}
				else
				{
					if(i==0)
					{
						if((a[i][j]>=a[i+1][j])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i][j+1]))
							cout<<i<<' '<<j<<endl;
					}
					else if(i==m-1)
										{
											if((a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i][j+1]))
												cout<<i<<' '<<j<<endl;
										}
					else if(j==0)
															{
																if((a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i][j+1])&&(a[i][j]>=a[i+1][j]))
																	cout<<i<<' '<<j<<endl;
															}
					else if(j==n-1)
															{
																if((a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i+1][j]))
																	cout<<i<<' '<<j<<endl;
															}
					else{if((a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i+1][j])&&(a[i][j]>=a[i][j+1]))
						cout<<i<<' '<<j<<endl;

					}

				}
			}

	return 0;
}
