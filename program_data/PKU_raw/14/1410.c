
struct stu
{
	int num;
	int mark1;
	int mark2;
	long int total_mark;
};

int main(void)
{
	int n,i,j,k,t=0,max;
	struct stu *p;
	struct stu *q;
	scanf("%d",&n);
	p=(struct stu *)malloc(1000000*sizeof(struct stu));
	q=p;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&(p+i)->num,&(p+i)->mark1,&(p+i)->mark2);
		(p+i)->total_mark=(p+i)->mark1+(p+i)->mark2;
	}
loop:	max=0;
		for(j=0;j<n;j++)
		{
			if((p+j)->total_mark>max)
	               max=(p+j)->total_mark;
		}
		for(k=0;k<n;k++)
			if(max==(p+k)->total_mark&&k<n)
			{
		        printf("%d %ld\n",(p+k)->num,(p+k)->total_mark);
			 	t++;   
				(p+k)->total_mark=0;
				break;
			}
		if(t<3) goto loop;
}