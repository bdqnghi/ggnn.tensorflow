//*******************************
//?????13 
//??????1200012798
//??? 2012.11.15
//******************************* 


int main()
{
	int a[101]={0},b[101]={0};
	int count=0,p,deta;
	int i,j,k;
	char t;
	
	t=cin.get();
	for(k=0;t!='\n';k++)
	{
		a[k]=(int)t-48;
		count++;
		t=cin.get();
	}



	p=a[0];
	for(i=0;i<=count-1;i++)
	{
		if(p<13)
		{
			p=10*p+a[i+1];
			b[i]=0;
		}
		else
		{
			b[i]=p/13;
			p=(p%13)*10+a[i+1];
		}

	}

	if(a[0]*10+a[1]<13)
	{
		deta=2;
	}
	else
	{
		deta=1;
	}

	if(count==1||(count==2&&deta==2))
	{
		cout << 0;
	}
	else
	{
		for(j=deta;j<=count-1;j++)
		{
			cout << b[j];
		}
	}
	cout << "\n" << p/10 << endl;


	return 0;
}