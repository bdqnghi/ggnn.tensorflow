int reverse(int num)
{int x=0,y=1,i=0,j=0;int fuhao=1;int a[12];
//cin>>num;
if(num<0)fuhao=-1;
num=abs(num);
while(i<12){
	if(num<pow(10,(double)i))break;
	y=10*y;
	i++;}
//cout<<i;

for(j=1;j<=i;j++){a[j]=num/(int)pow(10,(double)(i-j));num=num-a[j]*(int)pow(10,(double)(i-j));}
for(j=0;j<i;j++)//cout<<a[j]<<endl;
	x=x+a[i-j]*pow(10,(double)(i-j-1));
//cout<<x<<endl;

x=fuhao*x;

return (x);

}
int main()
{int i=0;int num;
	for(i=1;i<=6;i++)
	{cin>>num;cout<<reverse(num)<<endl;}
	return 0;
}