const int MAX=100;

int main()
{
double x[MAX], y[MAX];
int n;
double maxLength=0;//??????

cin>>n;
for(int i=0;i<n;i++)  //?????
cin>>x[i]>>y[i];

double length=0;
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
{
length=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));  //????????
//cout<<i<<":"<<j<<" "<<length<<endl;
if(length>maxLength)
maxLength=length;
}
cout<<maxLength<<endl;
return 0;
 }