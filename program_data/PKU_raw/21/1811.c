int main()
{int num[300],n,i,j,min,temp;
float sum=0,average,a,b;
cin>>n;
for(i=0;i<n;i++)
cin>>num[i];
for(i=0;i<n;i++)
{min=i;
for(j=i+1;j<n;j++)
{if(num[min]>num[j]) min=j;}
temp=num[i];
num[i]=num[min];
num[min]=temp;}
for(i=0;i<n;i++)
sum+=num[i];
average=sum/n;
a=average-num[0];
b=num[n-1]-average;
if(a>b) cout<<num[0]<<endl;
else if(a==b) cout<<num[0]<<","<<num[n-1]<<endl;
else cout<<num[n-1]<<endl;
return 0;}
