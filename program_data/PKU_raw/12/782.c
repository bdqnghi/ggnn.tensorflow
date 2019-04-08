int main()
{
	int a[17],i,j,k,s,n;
	for(k=1;;k++)
	{		
		s=0;n=0;
		for(i=1;;i++)
		{		
			cin>>a[i];
			n++;
			if(a[i]==0||a[i]==-1) break;
		}
		if (a[n]==-1) break;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				if((a[i]*2==a[j])||(a[j]*2==a[i]))
				 {
					s++;
				 }
			}
		}
	    cout<<s<<endl;
	   
	}
	return 0;
}
