

int main()
{
	int n=0;
	cin >> n;
	int time=0;
	int max=0;   //???? 
	int i,j=0;
	int a[n],b[n],c[n];
		for(i=0;i<n;i++)
		cin >> a[i] >> b[i];  //????? a?? b?? 
	for(i=0;i<n;i++)
	{
		if(90<=a[i]&&a[i]<=140&&60<=b[i]&&b[i]<=90) c[i]=1;  //???? 
		else c[i]=0;
	}	
	for(i=0;i<n;i++)
	{
        if(c[i]==1) time++;
        else
        {
            if(max<time)
                max=time;
            time=0;
        }
    }
    if(time>max) max=time;
	cout << max <<endl;

return 0;
}
