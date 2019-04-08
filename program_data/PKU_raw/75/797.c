int main()
{
	int nx,ny,i,j,lx,ly;
	char x[10000]={0};
	char y[10000]={0};
	float x1[1000]={0};
	float y1[1000]={0};
	char *p=NULL;

	int t[1001]={0};              
	gets(x);
	gets(y);
	lx=strlen(x);
	ly=strlen(y);
	for(i=0;i<lx;i++)
	{
		if(x[i]==',')
		{
			x[i]=0;
		}
	}
	nx=1;
	p=x;
	x1[0]=atof(x);
	for(i=0;i<lx;i++)
	{
		if(x[i]==0)
		{
			x1[nx]=atof(p+i+1);                          //?????????
			nx++;
		}
		
	}
	
	for(i=0;i<ly;i++)
	{
		if(y[i]==',')
		{
			y[i]=0;
		}
	}

	ny=1;
	p=y;
	y1[0]=atof(y);
	for(i=0;i<ly;i++)
	{
		if(y[i]==0)
		{
			y1[ny]=atof(p+i+1);
			

			ny++;
		}
	}


	
	for(i=0;i<nx;i++)
	{
		for(j=0;j<=999;j++)
		{
			if(x1[i]<=j&&y1[i]>j)
			{
				t[j]++;
			}
		}
	}

	int max=0;
	for(j=0;j<=999;j++)
	{
		if(t[j]>max)
		{
			max=t[j];
		}
	}
	
	cout<<nx<<" "<<max<<endl;
	

	


    return 0;	
}

	
