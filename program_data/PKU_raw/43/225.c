int main()
{
	int A[10000],B[10000],m,a=2,b=2,k=1,j=1,i=2,s=1,t=1;
	scanf("%d",&m);
	while(a<m)
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
			    break;
			}	
		}
		if(i==a)	
		{
			A[k]=a;
			k++;
		}
				a++;
	}
    while(b<m)
	{
		for(i=2;i<b;i++)
		{
			if(b%i==0)
			{
				break;
			}	
		}
		if(i==b)	
		{
			B[j]=b;
			j++;
		}			
		b++;
	
	}
	while(s<=k)
	{
		t=0;
		while(t<=j)
		{
			if(A[s]+B[t]==m)
			{
				if(s<=t) printf("%d %d\n",A[s],B[t]);
			}
			t++;
		}
		s++;
	}
	return 0;
}