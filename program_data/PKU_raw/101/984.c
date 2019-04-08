

int main() {
	int sa,sb,sc;
	for (int a=1;a<=3;a=a+1)
		for (int b=1;b<=3;b=b+1)
			for (int c=1;c<=3;c=c+1)
			{
				sa=(b>a)+(a==c);
				sb=(a>b)+(a>c);
				sc=(c>b)+(b>a);
				if (
						(a+b+c==6)&&(sa+sb+sc==3)&&(a!=b)&&(a!=c)&&(b!=c)&&(sa!=sb)&&(sa!=sc)&&(sb!=sc)&&(a+sa==3)&&(b+sb==3)&&(c+sc==3)
				   )
				{
					if (((a>b)&&(b>c))==1)
						cout <<"CBA";
					if (((a>c)&&(c>b))==1)
					    cout <<"BCA";
					if (((b>a)&&(a>c))==1)
						cout <<"CAB";
					if (((b>c)&&(c>a))==1)
						cout <<"ACB";
					if (((c>a)&&(a>b))==1)
						cout <<"BAC";
					if (((c>b)&&(b>a))==1)
					    cout <<"ABC";
				}
			}
	return 0;
	}