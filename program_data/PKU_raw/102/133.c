int main()
{
int n;
int m=0,f=0;
double a[41],b[41];
char s[8];
double k;
int i,j;
cin>>n;
while(n--)
{
	cin>>s;
	cin>>k;
	if(s[0]=='m')
	{  
		a[m]=k;
		m++;
	}
		if(s[0]=='f')
	{  
		b[f]=k;
		f++;
	}
}
sort(a,a+m);
sort(b,b+f);
for(i=0;i<m;i++)
{
printf("%.2f ",a[i]);

//cout<<setprecision(2)<<a[i]<<" ";
}
for(i=f-1;i>=0;i--)
{   
	if(i>0)
	{
printf("%.2f ",b[i]);
	}
		if(i==0)
	{
printf("%.2f",b[i]);
	}

}
cout<<endl;

return 0;
}