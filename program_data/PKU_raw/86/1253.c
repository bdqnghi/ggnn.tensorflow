
int main()
{   
	int n,m;
	int i,j;
	int wrong[60];
	int contine[60];
	int sum;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>m;
		j=1;
		sum=0;

		if(m==0)
			sum=60;                             //m==0????

		while(j<=m)
		{
			cin>>wrong[j];                      //????????
			contine[j]=wrong[j]+3*j-3;
			j++;
		}

		for(j=1;j<=m;j++)
		{
			if((contine[j]>=57)&&(contine[j]<60))
				{
					sum=wrong[j];                         
					break;
			    }
			else if(contine[j]>=60)
				{
					sum=60-3*(j-1);
					break;
			    }
		}
		if(j==m+1)
			sum=60-3*m;
		cout<<sum<<endl;
	}
	return 0;
}

