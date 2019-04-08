struct bin
{
	char num[10];
	int age;
}t,b[100],c[100],a[100];
void main()
{
	int n,i,j=0,k=0,p,q;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",a[i].num,&a[i].age);
		if(a[i].age>=60)
		{
			b[j]=a[i];
			j++;
		}
		p=j;
		if(a[i].age<60)
		{
			c[k]=a[i];
			k++;
		}
		q=k;
	}
    
	for(j=1;j<p;j++)
	for(i=0;i<p-j;i++)
	{
		if(b[i].age<b[i+1].age)
		{
          t=b[i];
		  b[i]=b[i+1];
		  b[i+1]=t;
		}
	}
    for(i=0;i<p;i++) 
		printf("%s\n",b[i].num);
    for(i=0;i<q;i++)
		printf("%s\n",c[i].num);
}