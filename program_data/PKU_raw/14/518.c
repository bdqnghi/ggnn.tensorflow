struct student
{
	int num;
	float chinese;
	float math;
	float sum;
};
void main()
{
     int n,i;
	 struct student *pt,*p,temp;
	 scanf("%d",&n);
     pt=(struct student *)malloc(n*LEN);
     for(p=pt;p<pt+n;p++)
	 {
		 scanf("%d%f%f",&p->num,&p->chinese,&p->math);
		 p->sum=p->chinese+p->math;
	 }

	 for(i=0;i<3;i++)
	 {
		 for(p=pt;p<pt+n-1-i;p++)
		 {
			 if(p->sum>=(p+1)->sum)
			 {temp=*p;*p=*(p+1);*(p+1)=temp;}
		 }
	 }
	 for(p=pt+n-1;p>pt+n-4;p--)
	 {
		 printf("%d %g\n",p->num,p->sum);
	 }
}