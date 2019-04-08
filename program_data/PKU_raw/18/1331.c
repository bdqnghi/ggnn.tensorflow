/*
 * juzhenguiling.cpp
 *
 *  Created on: 2012-11-26
 *      Author: 12198
 */
int n,a[201][201];
int i,j,sum;
int min1[201],min2[201];
void read();
void del(int);
void move(int);
int main()
{
    cin>>n;
    int i,j;
    for ( i = 0;i <n ; ++i)
    {
        read();
        sum = 0;
        for (j = 0; j < n-1 ;++j)
        {

               del(n-j);         //?n-j+1??????
               sum=sum+a[1][1];       //??
               move(n-j);         //?????????
        }
        cout << sum << endl;
    }
    return 0;
}
void read()
{
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
}
void del(int n)
{
	for(i=0;i<n;i++)
		{min1[i]=a[i][0];
			for(j=0;j<n;j++)
				if(a[i][j]<min1[i])
					min1[i]=a[i][j];
			//cout<<min1[i]<<"min1"<<endl;
		}
	for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				a[i][j]=a[i][j]-min1[i];
	/*for(i=0;i<n;i++)
				{for(j=0;j<n;j++)
					cout<<a[i][j]<<" ";
		            cout<<endl;}*/
	for(i=0;i<n;i++)
			{min2[i]=a[0][i];
				for(j=0;j<n;j++)
					if(a[j][i]<min2[i])
						min2[i]=a[j][i];
				//cout<<min2[i]<<"min2"<<endl;
			}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		   a[j][i]=a[j][i]-min2[i];
	/*for(i=0;i<n;i++)
			{for(j=0;j<n;j++)
				cout<<a[i][j]<<" ";
	            cout<<endl;}*/
}
void move(int n)
{
    for(i=2;i<n;i++)
    	for(j=0;j<n;j++)
    		a[i-1][j]=a[i][j];
    for(i=0;i<n;i++)
        	for(j=2;j<n;j++)
        		a[i][j-1]=a[i][j];
}
