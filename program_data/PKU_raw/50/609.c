int main()
{
	int i,w,a[11]={31,28,31,30,31,30,31,31,30,31,30};
    int t=0;
    scanf("%d",&w);
    if(w==7)
	{
		printf("%d\n%d\n",1,10);
	}
    else
	{
		for(i=0;i<11;i++)
		{
			t+=a[i];
	        if((t%7+w)%7==0)
				printf("%d\n",i+2);
		}
	}
	return 0;
}
