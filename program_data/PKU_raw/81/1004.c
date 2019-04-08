int (*q)[5];
int cmp(int x,int y,int a[][5])
{    int (*p)[5],i,temp;
      p=a;
	if(x>=0&&x<5&&y>=0&&y<5)
		{
		for(i=0;i<5;i++)
		{
           temp=*(*(p+x)+i);
		   *(*(p+x)+i)=*(*(p+y)+i);
            *(*(p+y)+i)=temp;
		}
		q=p;
		return(1);
	}
	else
		return(0);
}
int main()
{
	int n,m,a[5][5],i,j;
	q=a;
     for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>a[i][j];
	cin>>n>>m;
	if(cmp(n,m,q)==0)
		cout<<"error"<<endl;
	else
		for(i=0;i<5;i++)
		{
		for(j=0;j<5;j++)
		{   if(j==4)
			cout<<*(*(q+i)+j);
		else
			cout<<*(*(q+i)+j)<<" ";
		}
		cout<<endl;
		}
		return 0;
}
	