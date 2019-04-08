int main ()
{
    int a[150]={0},i,j,k,num;
	for(;;)
	{
	    num=0; 
		for (i=0;;i++)
		{
			cin>>a[i];
			if(a[i]==0) break;
		}
		for(j=0;j<i;j++)
		{
			for(k=0;k<i;k++)
			{
				if (a[j]==2*a[k])
				{
					num++;
				}
			}
		}
		if(a[0]!=-1)
		{
			  cout<<num<<endl;
		}
		else break;
	}
	return 0;
}