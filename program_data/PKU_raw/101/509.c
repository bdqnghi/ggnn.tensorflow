int a,b,c,i,j,k;
int main()
{
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3;b++)
		{
			for(c=1;c<=3;c++)
			{
				i=(b>a)+(c==a);
			    j=(a>b)+(a>c);
				k=(a>b)+(b>a);
if(a>b&&b>c&&i<j&&j<k) cout<<"CBA";
if(a>c&&c>b&&i<k&&k<j)cout<<"BCA";
if(b>a&&a>c&&j<i&&i<k)cout<<"CAB";
if(b>c&&c>a&&j>k&&k>i)cout<<"ACB";
if(c>a&&a>b&&k>i&&i>j)cout<<"BAC";
if(c>b&&b>a&&k>j&&j>i)cout<<"ABC";
			}
		}
	}
	return 0;
}
