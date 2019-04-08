void main()
{
	int n,i,j, b[100]={0},t,m;
	scanf("%d\n",&n);
	struct patient 
	{
		char num[10];
		int age;
	}a[100];
    for(i=0;i<n;i++) {scanf("%s %d\n",a[i].num,&a[i].age); b[i]=a[i].age;}
    for(j=0;j<n-1;j++)
	   for(i=0;i<n-1-j;i++) 
		   if(b[i]<b[i+1])
		   {t=b[i];b[i]=b[i+1];b[i+1]=t;}
    for(i=0;i<n;i++) if(b[i]<60) {m=i;break;}
	for(j=0;j<m;j++)   
		for(i=0;i<n;i++)
			if(a[i].age==b[j] && (j==0 || b[j]!=b[j-1])) printf("%s\n",a[i].num);
	for(i=0;i<n;i++) if(a[i].age<60) printf("%s\n",a[i].num);
}
