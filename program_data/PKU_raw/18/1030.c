int main()
{
	int i=0,j=0,k=0,m=0,n=0;
	int num;
	cin>>num;
	int an[100][100];
	for(int c=0;c<num;c++)
	{
		
		for(int i=0;i<num;i++)
		{
			for(j=0;j<num;j++)
				cin>>*(*(an+i)+j);
		}
		int sum=0;
		int hang;
		for(hang=num;hang>1;hang--)
		{
			int a=0,b=0;
			for(m=0;m<hang;m++)
			{
				a=*(*(an+m)+0);
				for(n=0;n<hang;n++)
				{
					if(*(*(an+m)+n)<a)
						a=*(*(an+m)+n);
				}
				for(n=0;n<hang;n++)
				*(*(an+m)+n)=*(*(an+m)+n)-a;
			}


			for(m=0;m<hang;m++)
			{
				b=*(*(an+0)+m);
				for(n=0;n<hang;n++)
				{
					if(*(*(an+n)+m)<b)
						b=*(*(an+n)+m);
				}
				for(n=0;n<hang;n++)
					*(*(an+n)+m)=*(*(an+n)+m)-b;
			}
			sum=sum+an[1][1];
			for(i=0;i<hang;i++)
			{
				for(j=1;j<hang;j++)
					*(*(an+i)+j)=*(*(an+i)+j+1);
			}
			for(i=0;i<hang;i++)
			{
				for(j=1;j<hang;j++)
					*(*(an+j)+i)=*(*(an+j+1)+i);
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}


