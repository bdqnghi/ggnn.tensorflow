int main()
{
	int a[5][5],i,j,k,n=0,max,min,row,colum;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin >> a[i][j];
		for(i=0;i<5;i++)
		{
			max=a[i][0];
			row=i;
			colum=0;
			for(j=1;j<5;j++)
			if(a[i][j]>max)
				{
					max=a[i][j];
					colum=j;
			}
				min=max;
				for(k=0;k<5;k++)
					if(a[k][colum]<min)
						min=a[k][colum];
				if(max==min)
					{
						n++;
						cout << row+1 << " " << colum+1 << " " << max <<endl;
					}
		}
		if(n==0)
			cout << "not found" << endl;
		return 0;
}
					
