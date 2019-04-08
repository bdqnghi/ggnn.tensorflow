
struct stu
{
  
  char name[20];
  int mark1,mark2;
  char office,west; 
  int artical;
 long money;
}student[120];
int main()
{
    int n,i,k;
    int m1,m2,a;
    char o,w;
	long max,sum;
	scanf("%d",&n);
	max=0; sum=0;
	for (i=1;i<=n;i++)
	{
	   scanf("%s %d %d %c %c %d",&student[i].name,&m1,&m2,&o,&w,&a);
	   student[i].money=0;
       if ((m1>80) && (a>0)) student[i].money=student[i].money +8000;
       if ((m1>85) && (m2>80)) student[i].money=student[i].money +4000;
	   if ((m1>90)) student[i].money=student[i].money +2000; 
	   if ((m1>85) && (w=='Y')) student[i].money=student[i].money +1000;
	   if ((m2>80) && (o=='Y')) student[i].money=student[i].money +850;
	   if (student[i].money>max) {max=student[i].money;  k=i;}
	   sum=sum+student[i].money ;
	}

    printf ("%s\n",student[k].name );
    printf ("%d\n",max);
	printf ("%d\n",sum);
}