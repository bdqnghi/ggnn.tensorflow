void main()
{
    struct p
    {
    	char num[11];
    	int age;
    };
    struct p c[101];
    int n,i,t=0,s,h,l=0;
    int a[100],b[100],d[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s%d",c[i].num,&c[i].age);
    for(i=0;i<n;i++)
    {
    	if(c[i].age>=60)
    	{
    		a[t]=c[i].age;
    		c[i].age=0;
    		b[t]=i;
    		t++;
    	}
    }
    if(t>0)
    {
    	leap:
        s=a[0];
        h=0;
        for(i=0;i<t;i++)
        {
        	if(a[i]>s)
        	{
        		s=a[i];
        		h=i;
        	}
        }
        printf("%s\n",c[b[h]].num);
        l++;
        a[h]=0;
        if(l<t)
        goto leap;
    }
    for(i=0;i<n;i++)
    {
    	if(c[i].age!=0)
    	printf("%s\n",c[i].num);
    }
}