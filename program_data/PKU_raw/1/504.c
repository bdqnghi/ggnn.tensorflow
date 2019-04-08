void qut(int a,int b);                                       //????
int num=0;                                                    //?????????
int main()
{
	int i,n,g[1000];                                         //?????????
	cin>>n;
	for(i=0;i<n;i++)                                         //??????
		cin>>g[i];
	for(i=0;i<n;i++)
	{
	    qut(g[i],1);                                         //????
		cout<<num<<endl;
              num=0;
	}
	return 0;
}

void qut(int a,int b)		
{
	int i;
	if (a>=b)		
	{
		num++;		
		if (b==1)	                                     
			b++;
		for (i=b;i<=a;i++)	
		{
			if (a%i==0)	
			{
				qut(a/i,i);	                                //??a%i==0,??
			}
		}
	}
}

