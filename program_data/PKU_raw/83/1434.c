int main()
{
  int n,a;
  cin>>n;
  int q[n],score[n];
float gpa[n];
float avr,sum=0,psum=0;
  for (int i=0;i<n;i++)
  {
   cin>>q[i];
   }
   for (int i=0;i<n;i++)
   {
    cin>>score[i];
    }
  for (int i=0;i<n;i++)
{
a=score[i];
if(a>=90)
gpa[i]=4.0*q[i];
else if (a>=85)
gpa[i]=3.7*q[i];
else if (a>=82)
gpa[i]=3.3*q[i];
else if (a>=78)
gpa[i]=3.0*q[i];
else if (a>=75)
gpa[i]=2.7*q[i];
else if (a>=72)
gpa[i]=2.3*q[i];
else if (a>=68)
gpa[i]=2.0*q[i];
else if (a>=64)
gpa[i]=1.5*q[i];
else if (a>=60)
gpa[i]=1.0*q[i];
else
gpa[i]=0;
}
for (int i=0;i<n;i++)
{
sum+=gpa[i];
psum+=q[i];
}
avr=sum/psum;
printf("%.2f",avr);
}
