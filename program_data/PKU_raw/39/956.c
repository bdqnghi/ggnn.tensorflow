struct stu
{
 char name[20];
 int qm;
 int bj;
 char bgb;
 char xb;
 int lw;
 int sum;
};
int main()
{
	 int n,i,max=0,SUM=0;
           struct stu xs[100],b;
           scanf("%d",&n);
           for(i=0;i<n;i++)
           {
             scanf("%s",xs[i].name);    
             getchar();
             scanf("%d %d %c %c %d",&xs[i].qm,&xs[i].bj,&xs[i].bgb,&xs[i].xb,&xs[i].lw);     
             xs[i].sum=0;
             if(xs[i].qm>80&&xs[i].lw>0) xs[i].sum=xs[i].sum+8000;
             if(xs[i].qm>85&&xs[i].bj>80)  xs[i].sum+=4000;
		if(xs[i].qm>90)
		xs[i].sum+=2000;
		if(xs[i].qm>85&&xs[i].xb=='Y')
		xs[i].sum+=1000;
		if(xs[i].bj>80&&xs[i].bgb=='Y')
		xs[i].sum+=850;
		SUM+=xs[i].sum;
		if(xs[i].sum>max)
		{
			max=xs[i].sum;
			b=xs[i];
		}
	}
	printf("%s\n%d\n%d",b.name,max,SUM);
	return 0;
} 