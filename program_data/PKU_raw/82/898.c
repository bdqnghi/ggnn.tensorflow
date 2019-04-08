int main()
{
	int n=0;
	int h=0,l=0;
	cin>>n;
	int time=0;
	int max=0;
	for(int i=0;i<n;i++)
	{
		cin>>h>>l;
		if(h>=90&&h<=140&&l>=60&&l<=90)
		{
			time++;
			if(time>max)
				max=time;
		}
		else
			time=0;
	}
	printf("%d\n",max);
	return 0;
}