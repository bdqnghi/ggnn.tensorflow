
int main(int argc, char *argv[])
{
  int n,i;
  float gpa,sum=0,all=0,final;
  int point[20],mark[20];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&point[i]);
  }
  for(i=1;i<=n;i++) scanf("%d",&mark[i]);
  for(i=1;i<=n;i++) 
  {
    if(mark[i]>=90) gpa=4.0;
    else if(mark[i]>=85) gpa=3.7;
    else if(mark[i]>=82) gpa=3.3;
    else if(mark[i]>=78) gpa=3.0;
    else if(mark[i]>=75) gpa=2.7;
    else if(mark[i]>=72) gpa=2.3;
    else if(mark[i]>=68) gpa=2.0;
    else if(mark[i]>=64) gpa=1.5;
    else if(mark[i]>=60) gpa=1.0;
    else gpa=0;
    all=all+point[i]*gpa;
    sum+=point[i];
  }
  final=all/sum;
  printf("%.2f",final);
  return 0;
}