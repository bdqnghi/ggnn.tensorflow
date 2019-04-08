double fun(int x);
int main()
{
  int n,i;
  int course[10];
  int grade[10];
  int mark[10];
  double jdsum=0;
  int csum=0;
  double jd[10];
  double  GPA;
    scanf("%d",&n); 
	for(i=0;i<n;i++)
	 {scanf("%d",&course[i]);
	csum+=course[i];
	 }
	for(i=0;i<n;i++)
	{scanf("%d",&mark[i]);
	 jd[i] = fun(mark[i]);
	 jdsum+=course[i]*jd[i];
	}
	 GPA=1.0*jdsum/csum;
	 printf("%.2lf",GPA);

	
	return 0;
}
double fun(int x)
{

	if(x>=90)return 4.0;
	if(x>=85)return 3.7;
	if(x>=82)return 3.3;
	if(x>=78)return 3.0;
	if(x>=75)return 2.7;
	if(x>=72)return 2.3;
	if(x>=68)return 2.0;
	if(x>=64)return 1.5;
	if(x>=60)return 1.0;
	return 0;
}