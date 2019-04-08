int main()
{
	int a[110]={0};
	int i=0;
	char x[2]={'\0'};
	while(true)
	{
		x[0]=getchar();
		if(x[0]=='\n')break;
		a[i]=atof(x);
		i++;
	}
	int n,yu;
	yu=a[0];
	n=i;
	int b[110];
	memset(b,-1,110*sizeof(int));
	if(i==1)b[0]=0;
	for(i=1;i<n;i++)
	{
		int now;
		now=a[i]+10*yu;
		if(now<13){b[i-1]=0;yu=now;}
		else
		{
			b[i-1]=now/13;
			yu=now%13;
		}
	}
	int cow=0;
	while(b[cow]==0)cow++;
	if(b[1]==-1)cow=0;
	for(i=cow;i<n;i++)if(b[i]!=-1)cout<<b[i];
	cout<<endl;
	cout<<yu;
	
	return 0;
	
}