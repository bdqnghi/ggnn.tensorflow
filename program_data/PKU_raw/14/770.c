
int main()
{
    struct ss{
		int num,yu,sh;
		int sum;
	};
	int n,i;
	struct ss *stu;
	
	scanf("%d",&n);
	stu=(struct ss *)malloc(sizeof(ss)*n);
	for(i=0;i<n;i++)
	{int num1,yu1,sh1;
	(stu+i)->num=0;
	(stu+i)->yu=0;
	(stu+i)->sh=0;
	(stu+i)->sum=0;
	scanf("%d %d %d",&num1,&yu1,&sh1);
    (stu+i)->num=num1;
	(stu+i)->yu=yu1;
	(stu+i)->sh=sh1;
    (stu+i)->sum=yu1+sh1;
	}
	for(i=1;i<n;i++)
	{int t;
	if((stu+0)->sum<(stu+i)->sum)
	{t=(stu+0)->sum;
     (stu+0)->sum=(stu+i)->sum;
	 (stu+i)->sum=t;
	 t=(stu+0)->num;
	 (stu+0)->num=(stu+i)->num;
	 (stu+i)->num=t;}}
	for(i=2;i<n;i++)
	{int t;
	if((stu+1)->sum<(stu+i)->sum)
	{t=(stu+1)->sum;
     (stu+1)->sum=(stu+i)->sum;
	 (stu+i)->sum=t;
	 t=(stu+1)->num;
	 (stu+1)->num=(stu+i)->num;
	 (stu+i)->num=t;}}
	for(i=3;i<n;i++)
	{int t;
	if((stu+2)->sum<(stu+i)->sum)
	{t=(stu+2)->sum;
     (stu+2)->sum=(stu+i)->sum;
	 (stu+i)->sum=t;
	 t=(stu+2)->num;
	 (stu+2)->num=(stu+i)->num;
	 (stu+i)->num=t;}}
	for(i=0;i<3;i++)
	{	printf("%d %d\n",(stu+i)->num,(stu+i)->sum);}
    free(stu);
	return 0;
}


	