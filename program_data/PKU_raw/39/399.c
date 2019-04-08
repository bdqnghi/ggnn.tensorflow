struct student
{
	char name[22];
	int qimo;
	int banji;
	char gan;
	char sheng;
	int num;
};
void main()
{
	int n,i,j=0,sum,tol=0,max=0;
	struct student t,*s;
	scanf("%d",&n);
	s=(struct student *)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{ sum=0;
		scanf("%s %d %d %c %c %d",(*(s+i)).name,&(*(s+i)).qimo,&(*(s+i)).banji,&(*(s+i)).gan,&(*(s+i)).sheng,&(*(s+i)).num);
      if (((*(s+i)).qimo>80)&&((*(s+i)).num>=1))  sum=sum+8000;
	  if (((*(s+i)).qimo>85)&&((*(s+i)).banji>80))  sum=sum+4000;
	  if ((*(s+i)).qimo>90)  sum=sum+2000;
	  if (((*(s+i)).qimo>85)&&((*(s+i)).sheng=='Y'))  sum=sum+1000;
	  if (((*(s+i)).banji>80)&&((*(s+i)).gan=='Y'))  sum=sum+850;
	  if(sum>max)   {max=sum;j=i;}
	  tol=tol+sum;
	}
	printf("%s\n%d\n%d\n",(*(s+j)).name,max,tol);
}