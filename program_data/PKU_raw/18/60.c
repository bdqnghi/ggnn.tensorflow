int n,n1,p,q;
int matrix(int a[][101]);
int mi(int a[]);
void xiao(int a[][101]);
int main()
{
int i;
cin>>n;
for(i=1;i<=n;i++)
{    n1=n;
	int a[101][101];
		for(p=0;p<n;p++)
  for(q=0;q<n;q++)
    cin>>a[p][q];
cout<<matrix(a)<<endl;
/*for(p=0;p<n;p++)
{for(q=0;q<n;q++)
cout<<a[p][q];cout<<endl;}*/
}
return 0;
}
int matrix(int a[][101])
{int i,j,sum=0;
	int smin[101],dmin[101],t[101][101];
	
for(i=0;i<n1;i++)
	smin[i]=mi(a[i]);
for(i=0;i<n1;i++)
  for(j=0;j<n1;j++)
	  if(smin[i]!=0)
  {a[i][j]-=smin[i];/*cout<<smin[i]<<endl;*/}
for(j=0;j<n1;j++)
		for(i=0;i<n1;i++)
			t[j][i]=a[i][j];
for(i=0;i<n1;i++)
	dmin[i]=mi(t[i]);
for(i=0;i<n1;i++)
  for(j=0;j<n1;j++)
	  if(dmin[i]!=0)
    a[j][i]-=dmin[i];
sum=a[1][1];
/*for(p=0;p<n1;p++)
{for(q=0;q<n1;q++)
cout<<a[p][q];cout<<endl;}*/if (n1==2)return a[1][1];
xiao(a);n1--;
sum=sum+matrix(a);
return sum;
}
int mi(int a[])
{
int i,min=a[0];
for(i=0;i<n1;i++)
  if(a[i]<=min)
	  min=a[i];
return min;
}
void xiao(int a[][101])
{
int i,j;
for(i=1;i<n1;i++)
   a[0][i]=a[0][i+1];
a[0][i]=0;
for(j=1;j<n1;j++)
{for(i=1;i<n1;i++)
a[j][i]=a[j+1][i+1];a[j][i]=0;}
for(i=1;i<n1;i++)
a[i][0]=a[i+1][0];


for(i=0;i<n1;i++)
a[n-1][i]=0;
/*for(p=0;p<n1;p++)
{for(q=0;q<n1;q++)
cout<<a[p][q];cout<<endl;}*/

}