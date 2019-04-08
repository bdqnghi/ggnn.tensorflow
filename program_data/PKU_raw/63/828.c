int main()
{
	int A[200][200],B[200][200],C[200][200],x1,y1,x2,y2,i,j,k,l,sum=0;
	cin>>y1>>x1;
	for(i=1;i<=y1;i++)
		for(j=1;j<=x1;j++)
	      cin>>A[i][j];
	cin>>y2>>x2;
	for(i=1;i<=y2;i++)
		for(j=1;j<=x2;j++)
	      cin>>B[i][j];
	for(i=1;i<=y1;i++)
		for(j=1;j<=x2;j++)
			{
				sum=0;
				for(k=1;k<=x1;k++)
					   sum+=A[i][k]*B[k][j];
				C[i][j]=sum;
		    }
    for(i=1;i<=y1;i++)
		{
			cout<<C[i][1];
			if(x2>=2)
		    for(j=2;j<=x2;j++)
		       cout<<" "<<C[i][j];
			cout<<endl;
	    }
	return 0;


}

