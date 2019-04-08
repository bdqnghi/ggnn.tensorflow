int main ()
{
	int n,l,yushu,k,s=0;
	cin>>n;
	for (int i=1; i<=n; i++)
	{
		if (i%7==0)
			continue;
		else
		    k=i;
                while ( k!=0)
                {
                    yushu=k%10;
                    if (yushu==7)
                    break;
                    else
                    k=(int)k/10;
                }
        if ( k>=0&&k<=9&&yushu!=7)
        s=s+i*i;
        else
        s=s;
    }
	cout<<s;
return 0;
}
