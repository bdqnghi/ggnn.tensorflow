void main()
{
    struct student
    {
    	long num;
    	int chinese;
    	int math;
    };
    struct student stu[100001];
    int i,t,h,l=0;
    long n;
    int a[100001];
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    scanf("%d%d%d",&stu[i].num,&stu[i].chinese,&stu[i].math);
    for(i=0;i<n;i++)
    a[i]=stu[i].chinese+stu[i].math;
    leap:
    t=a[0];
    h=0;
    for(i=1;i<n;i++)
    {
    	if(a[i]>t)
    	{
    		t=a[i];
    	    h=i;
    	}
    }
    printf("%ld %d\n",stu[h].num,a[h]); 
    l++;
    a[h]=0;
    if(l<3)
    goto leap; 
}