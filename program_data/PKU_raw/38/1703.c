int main()
{
    double a[100],s=0;
	int k;
	cin>>k;
	for(;k>0;k--)
	{
                 s=0;
                 double *p=a;
                 double ave=0,sum=0;
                 int n;
                 cin>>n;
                 for(int i=0;i<n;i++)
                 {
                         cin>>*(p+i);
                         ave+=*(p+i);
                 }
                 ave/=n;
                 for(int i=0;i<n;i++)
                 sum+=(*(p+i)-ave)*(*(p+i)-ave);
                 s=sqrt(sum/n);
                 printf("%.5f\n",s);
    }        
                               
	return 0;
}
