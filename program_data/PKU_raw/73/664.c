
int main()
{
	int max[6],min[6],row[6],line[6],i,j,a[6][6];
	for (i=1;i<6;i++)
	{
		max[i]=0;
		for (j=1;j<6;j++)
		{
			cin>>a[i][j];
			if (a[i][j]>max[i])
			{
				max[i]=a[i][j];
			    row[i]=i;
				line[i]=j;
			}	
		}
	}
	//for (i=1;i<6;i++)			
	  //cout<<max[i]<<endl;
	for (i=1;i<6;i++)
		{
			min[i]=a[1][i];
			for (j=1;j<6;j++)
			{
				if (min[i]>a[j][i])
				{
					min[i]=a[j][i];
				}
			}
	    }
	//for (i=1;i<6;i++)
			//cout<<min[i]<<endl;
	for (i=1;i<6;i++)
		if (a[row[i]][line[i]]==min[line[i]])
		{
			cout<<row[i]<<' '<<line[i]<<' '<<a[row[i]][line[i]]<<endl;
			return 0;
		}
	cout<<"not found";
	return 0;
}