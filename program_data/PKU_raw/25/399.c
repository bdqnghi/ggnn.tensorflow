
int main()
{
	int n;
	cin>>n;

	if(n==0)
		cout<<1;
	else

	{
			int an[100];
			memset(an,0,sizeof(an));
			an[0]=2;
			for(int i=1;i<n;i++)
			{
				for(int jjj=0;jjj<90;jjj++)
					an[jjj]=2*an[jjj];
				for(int j=0;j<90;j++)
				{
					if(an[j]>=10)
					{
						an[j]=an[j]-10;
						an[j+1]+=1;
					}
				}
			}	
			int jj=90;
			while(an[jj]==0)
				jj--;
			for(int mm=jj;mm>=0;mm--)
				cout<<an[mm];
	}
	return 0;
}







