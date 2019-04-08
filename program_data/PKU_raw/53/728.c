void main()
{
	
	char *p,*ip,a[1000];
	int flag=0,i,n;
    scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[0]);
	for(p=a+1;p<a+n;p++)
	{   flag=0;
		for(ip=p-1;ip>=a;ip--)
			if(*p==*ip){flag=1;break;}
		if(flag==0)printf(",%d",*p);
	}
}
	