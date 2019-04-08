int main() 
{
	int p, n, a, b, i, m, t, k; 
	cin >> p;
	for(n=6;n<=p;n=n+2)
	{
		for(i=2;i<=(n/2);i=i+1) 
		{	
			a = sqrt(i);
			for(t=3;t<=a;t=t+2) 
			{
				if(i%t==0) break; 
			}
			if(t>a)
			{
				m = n - i; 
				b = sqrt(m); 
				for(k=2;k<=b;k++) 
				{
					if(m%k==0) break; 
				}
				if(k==b+1) 
				{
					cout << n << "=" << i << "+" << m << endl; 
					break;
				}
			}	
		 }
	}
	return 0; 
} 
