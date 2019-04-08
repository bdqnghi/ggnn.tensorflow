/*
 * Matrix to zero.cpp
 *??:????
 *  Created on: 2012-11-27
 *      Author: ???
 */


int sum=0;                      //????sum
void change(int n);             //????
int number[100][100];           //????number
int main()
{
	int n,k,j;                  //????
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(k=0;k<n;k++)
			for(j=0;j<n;j++)
		    cin>>number[k][j]; //????
		sum=0;
		change(n);             //???? change
	}
	return 0;
}

void change(int n)             //????change
{
	int m;
	m=n;
	int min;                   //???
	if(m==1)                   //?????
		cout<<sum<<endl;       //??
	else
	{
	int i=0,j=0;
	for(i=0;i<m;i++)          //???
	  {
		min=number[i][0];
		for(j=0;j<m;j++)
			if(min>number[i][j])
				min=number[i][j];
		for(j=0;j<n;j++)
			number[i][j]=number[i][j]-min;
	   }
	for(i=0;i<m;i++)           //???
	  {
		min=number[0][i];
		for(j=0;j<m;j++)
			if(min>number[j][i])
				min=number[j][i];
		for(j=0;j<m;j++)
			number[j][i]=number[j][i]-min;
	  }

	sum=sum+number[1][1];     //??
	for(j=0;j<m;j++)        //??
		for(i=1;i<m-1;i++)
			number[i][j]=number[i+1][j];
	for(i=0;i<m-1;i++)
		for(j=1;j<m-1;j++)
			number[i][j]=number[i][j+1];
	m=m-1;
    change(m);                //??
	}
}