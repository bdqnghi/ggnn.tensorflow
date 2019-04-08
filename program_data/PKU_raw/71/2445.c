int main()
{
	int n,a[10000],b[10000],c[10000],i=0,s,m;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		if(a[i]%4!=0||a[i]%100==0&&a[i]%400!=0)
		{
			switch(b[i])
			{
			case 1:s=1;break;
			case 2:s=32;break;
			case 3:s=60;break;
			case 4:s=91;break;
			case 5:s=121;break;
			case 6:s=152;break;
			case 7:s=182;break;
			case 8:s=213;break;
			case 9:s=244;break;
			case 10:s=274;break;
			case 11:s=305;break;
			case 12:s=335;break;
			default :;
			}
			switch(c[i])
			{
				case 1:m=1;break;
			case 2:m=32;break;
			case 3:m=60;break;
			case 4:m=91;break;
			case 5:m=121;break;
			case 6:m=152;break;
			case 7:m=182;break;
			case 8:m=213;break;
			case 9:m=244;break;
			case 10:m=274;break;
			case 11:m=305;break;
			case 12:m=335;break;
			default :;
			}
		}
		else
		{
				switch(b[i])
			{
			case 1:s=1;break;
			case 2:s=32;break;
			case 3:s=61;break;
			case 4:s=92;break;
			case 5:s=122;break;
			case 6:s=153;break;
			case 7:s=183;break;
			case 8:s=214;break;
			case 9:s=245;break;
			case 10:s=275;break;
			case 11:s=306;break;
			case 12:s=336;break;
			default :;
			}
			switch(c[i])
			{
				case 1:m=1;break;
			case 2:m=32;break;
			case 3:m=61;break;
			case 4:m=92;break;
			case 5:m=122;break;
			case 6:m=153;break;
			case 7:m=183;break;
			case 8:m=214;break;
			case 9:m=245;break;
			case 10:m=275;break;
			case 11:m=306;break;
			case 12:m=336;break;
			default :;
			}
		}
		if((abs(s-m))%7==0)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<endl;
		s=0;
		m=0;
	}
	return 0;
}
