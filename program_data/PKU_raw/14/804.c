void main()
{
	int i,n,m;
	scanf("%d\n",&n);
	int j,b[100000]={0},t,s;
	struct student
	{
		int num;
		int lang;
		int math;
	};
	struct student a[100000];
	for(i=0;i<n;i++) scanf("%d %d %d\n",&a[i].num,&a[i].lang,&a[i].math);
    for(i=0;i<n;i++) b[i]=a[i].lang+a[i].math;
    for(j=0;j<3;j++)
		for(i=1;i<n-j;i++)
			if(b[j]<b[j+i])
			{t=b[j];b[j]=b[j+i];b[j+i]=t;}
    for(j=0;j<3;j++)
        for(i=0;i<n;i++)
		{
			m=a[i].lang+a[i].math;
			if(m==b[j] && i!=s) {printf("%d %d\n",a[i].num,m);s=i;break;}
		}
}


