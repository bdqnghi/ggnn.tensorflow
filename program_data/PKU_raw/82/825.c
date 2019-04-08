void main(){
	int i,n,s=0,t=0;
	scanf("%d",&n);
	int a[100],b[100];
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		{
			t++;
		}
		else
		{
			if(s<t)
			{
				s=t;
			}
			t=0;
		}
	}
	if(s<t)
			{
				s=t;
			}
	printf("%d",s);
}
	