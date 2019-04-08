int main()
{
    int a,b,n,hours1=0,hours2=0,max,i=1;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
	{
		scanf("%d %d",&a,&b);
        if(a>=90&&a<=140&&b>=60&&b<=90)
        hours1=hours1+1;
        else 
			if(hours2<=hours1)
		{
				hours2=hours1;
                hours1=0;
		}
			else
				hours1=0;
	}
    if(hours1>hours2)
    max=hours1;
    else
    max=hours2;
    printf("%d",max);
    return 0;
}