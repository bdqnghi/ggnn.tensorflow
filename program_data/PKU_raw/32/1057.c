

int main()
{   
	int n,i;
	cin >> n;
	
	for( i=0;i<n;i++)
	{
		char a1[100],a2[100];
		cin >> a1 >> a2;
		cin.get();
	    int l1=strlen(a1), l2=strlen(a2);


		int b1[100],b2[100],i,j;
		memset( b1 ,0 ,sizeof(b1) );
		memset( b2 ,0 ,sizeof(b2) );
		j=0;
		for( i=l1-1;i>=0;i--)
			b1[j++]=a1[i]-'0';
		j=0;
		for( i=l2-1;i>=0;i--)
			b2[j++]=a2[i]-'0';

		for(i=0;i<l1;i++)              //??
		{
			b1[i]=b1[i]-b2[i];
			if(b1[i]<0)
			{
					b1[i]+=10;
					b1[i+1]--;
			}
		}
		
		i=99;
		while( b1[i] ==0 )
		{
			i--;
			if( i==0 )
				break;
		}

		while(i>=0)
			cout << b1[i--];
	
		cout << endl;
	}
	return 0;
}

