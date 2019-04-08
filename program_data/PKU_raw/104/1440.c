

int a[20]={0},b[20]={0},i=0;

void f(int x)
{
	if (x==1)
	{
		a[i]=x;
		i++;
	}
	else
	{
		f(x/2);
		a[i]=x;
		i++;
	}
}


int main()
{
	int x,y,j,counter=0,k;
	cin>>x>>y;
	f(y);
	for (j=0;j<20;j++)
	{
		b[j]=a[j];
		a[j]=0;
	}
	i=0;
	f(x);
	for (j=0;j<20;j++)
	{
		if (b[j]==a[j]&&b[j]>0)
			counter++;
		else
			break;
	}
	cout<<a[counter-1]<<endl;
	return 0;
}