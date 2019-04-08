
int main()
{
	int num;
	int (*p)[100];
	int jz[100][100];
	cin>>num;
	int x=num;
	int min=9999;
	p=jz;
	for(int i=1; i<=num; i++)
	{   x=num;
		int sum=0;
		for(int k=0; k<x; k++)
			for(int j=0; j<x; j++)
				cin>>*(*(p+k)+j);
		
		while(x>=0)
		{


			for(int k=0; k<x; k++)
			{
				for(int j=0; j<x; j++)
				{
					if(*(*(p+k)+j)<min) min=*(*(p+k)+j);
				}
				for(int j=0; j<x; j++)
				{
					*(*(p+k)+j)=*(*(p+k)+j)-min;
					
				}
                min=9999;
			}

			for(int j=0; j<x; j++)
			{
				for(int k=0; k<x; k++)
				{
					if(*(*(p+k)+j)<min) min=*(*(p+k)+j);
				}
				for(int k=0; k<x; k++)
				{
					*(*(p+k)+j)=*(*(p+k)+j)-min;
					
				}
                min=9999;
			}
			
			if(x>1)
			sum=sum+*(*(p+1)+1);
			
			for(int k=0; k<x; k++)
				for(int j=1; j<x-1; j++) *(*(p+k)+j)=*(*(p+k)+j+1);
			for(int j=0; j<x; j++)
				for(int k=1; k<x-1; k++) *(*(p+k)+j)=*(*(p+k+1)+j);
			x--;
		}
	
		cout<<sum<<endl;

	}
	return 0;
}

