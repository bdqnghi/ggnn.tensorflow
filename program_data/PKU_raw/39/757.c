void main()
{
struct student
{char name[21];
 int term,cla;
 char lead,west;
 int dis,sum;
}s,s1;
 int n,i,money[5],total;
 scanf("%d",&n);
 s1.sum=-1;
 total=0;
 for(i=0;i<n;i++)
 {  money[0]=money[1]=money[2]=money[3]=money[4]=0;
	scanf("%s %d %d %c %c %d",s.name,&s.term,&s.cla,&s.lead,&s.west,&s.dis);
    if(s.term>80&&s.dis>0) money[0]=8000;
	if(s.term>85&&s.cla>80) money[1]=4000;
	if(s.term>90) money[2]=2000;
	if(s.term>85&&s.west=='Y') money[3]=1000;
	if(s.cla>80&&s.lead=='Y') money[4]=850;
	s.sum=money[0]+money[1]+money[2]+money[3]+money[4];
	total+=s.sum;
	if(s.sum>s1.sum) s1=s;
 }
     printf("%s\n%d\n%d\n",s1.name,s1.sum,total);
}
