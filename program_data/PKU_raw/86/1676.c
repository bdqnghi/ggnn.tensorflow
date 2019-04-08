int main()
{
	int i,j,k,s,m,n,a[100],b[100][100],c;
	cin>>m;
	for(i=0;i<m;i++)
	{ 
		s=0;
		cin>>a[i]; //?????????
		if(a[i]==0)
	    {	cout<<60<<endl;
            continue;
	    }
		else
		{
		for(j=0;j<a[i];j++)
		  cin>>b[i][j];
		if(b[i][a[i]-1]+3*(a[i])>=63)
			{
				for(j=a[i]-2;j>0;j--)
					{
				         if(b[i][j]+(j+1)*3<=60)
						 {
							  c=60-(j+1)*3;
							    break;
						 }
						 if(b[i][j]+j*3<=60)
						{
							c=b[i][j];
							break;
						 }
				     }               //???????60?????????????
		     }
		else 
		{
			if(b[i][a[i]-1]+3*(a[i])>=60)
			c=b[i][a[i]-1];
			else
				c=60-3*a[i];   //??????????
		}
		
		cout<<c<<endl;
		}

	}
	return 0;

}
