struct student
{
	int n1;
	int n2;
	int n3;
	struct student *next;
};
void main()
{
	struct student *p,*head,*tail;
	int n,i,sum[100000],max1,max2,max3,k1,k2,k3;
	scanf("%d",&n);
	head=NULL;tail=NULL;
	for(i=1;i<=n;i++)
	{
		p=(struct student*)malloc(len);
		scanf("%d%d%d",&p->n1,&p->n2,&p->n3);
		if(head==NULL)
			head=tail=p;
		else
		{
			tail->next=p;
			tail=p;}
		sum[i]=p->n2+p->n3;
	}
	max1=sum[1];k1=1;
	for(i=1;i<=n;i++)
		if(sum[i]>max1) {max1=sum[i];k1=i;}
	sum[k1]=0;

         max2=sum[1];k2=1;
         for(i=1;i<=n;i++)
		if(sum[i]>max2) {max2=sum[i];k2=i;}
	sum[k2]=0;

	max3=sum[1];k3=1;
	for(i=1;i<=n;i++)
		if(sum[i]>max3) {max3=sum[i];k3=i;}
	printf("%d %d\n%d %d\n%d %d\n",k1,max1,k2,max2,k3,max3);
}


