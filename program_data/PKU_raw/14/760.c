int main()
{
	int n,i;
	int o=0,oz,t=0,tz,th=0;
	scanf("%d",&n);
    struct{
		int h,z;
	}s[100000];
  	for(i=0;i<n;i++)
	{
		int h0,x0,y0;
		scanf("%d%d%d",&h0,&x0,&y0);
		s[i].h=h0;
		s[i].z=x0+y0;
	}
	for(i=0;i<n;i++)
		if(s[i].z>o)
			o=s[i].z;
	for(i=0;i<n;i++)
		if(s[i].z==o)
		{
			oz=i;
			printf("%d %d\n",s[i].h,s[i].z);
			break;
		}
	for(i=0;i<n;i++)
		if((i!=oz)&&(s[i].z>t))
			t=s[i].z;
	for(i=0;i<n;i++)
		if((i!=oz)&&(s[i].z==t))
		{
			tz=i;
			printf("%d %d\n",s[i].h,s[i].z);
			break;
		}
	for(i=0;i<n;i++)
		if((i!=oz)&&(i!=tz)&&(s[i].z>th))
			th=s[i].z;
	for(i=0;i<n;i++)
		if((i!=oz)&&(i!=tz)&&(s[i].z==th))
		{
			printf("%d %d\n",s[i].h,s[i].z);
			break;
		}
	return 0;
}
