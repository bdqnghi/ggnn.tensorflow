void play(int a[100],int b[100]);
int end[100]={0};
int main()
{  
	int a[100]={0},N,i=0,j=0;
	cin>>N;
	a[1]=2;
    if(N==0){cout<<"1";return 0;}
	else
	{
		for(i=0;i<N-1;i++)
        {
			play(a,a);
			for(j=0;j<100;j++)
			{a[j]=end[j];}
		}
	}
	for(i=99;i>=0;i--)
	{if(a[i]!=0)break;}
	for(j=i;j>0;j--)
	{cout<<a[j];}
	return 0;
}

void play(int a[],int b[])
{
	int p,f[100]={0},i=0;
	for(i=0;i<100;i++)
	{
		if(a[i]+b[i]+f[i]>=10)
		{
		  end[i]=(a[i]+b[i]+f[i])-10;
		  f[i+1]++;
		}
	   else
	   {
		 end[i]=a[i]+b[i]+f[i];
	   }
	}

}