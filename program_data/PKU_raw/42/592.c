void main()
{
	int n,*p,a[100000],m,chongfu=0;
	scanf("%d",&n);
    for(p=a;p<a+n;p++)
	scanf("%d",p);
	scanf("%d",&m);
	for(p=a;p<a+n;p++)
	{
	
        if(*p==m)  chongfu++;
                  
         else if(*p!=m)  *(p-chongfu)=*p;
		 
	}
	for(p=a;p<a+n-chongfu-1;p++)
		printf("%d ",*p);
	printf("%d",*(a+n-chongfu-1));
}   
