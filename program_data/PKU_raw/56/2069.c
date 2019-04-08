void main()
{
	int m,n=0,i,a[6]={0};
	scanf("%d",&m);
		if(m<10)
		{ n=m;
        printf("%d\n",n);}
		else 
		{
			for(i=1;i<=5;i++)
			{
			a[i]=m%10;
			m=(m-a[i])/10;
			}
	if(a[5]!=0)
		n=a[5]+a[4]*10+a[3]*100+a[2]*1000+a[1]*10000;
	else if(a[4]!=0)
		n=a[4]+a[3]*10+a[2]*100+a[1]*1000;
	else if(a[3]!=0)
		n=a[3]+a[2]*10+a[1]*100;
	else if(a[2]!=0)
		n=a[2]+a[1]*10;
	else
		n=a[1];
       printf("%d\n",n);}
}
