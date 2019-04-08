int main()
{
	int a, b, c, Ca, Cb, Cc,RA, RB, RC;
	for(a=0;a<=2;a++)
	{
		for(b=0;b<=2;b++)
		{
			if(b==a) continue;
			else 
			{
				c=3-a-b;
				Ca=(b>a);
				Cb=(a>b)+(a>c);
				Cc=(c>b)+(b>a);
				if ((Ca+a==2)&&(Cb+b==2)&&(Cc+c==2))
				{RA=a;RB=b;RC=c;}
				
			}
		}
	}
	if(RA>RB&&RB>RC) cout << "CBA";
	if(RA>RC&&RA>RB) cout << "BCA";
	if(RB>RA&&RA>RC) cout << "CAB";
	if(RB>RC&&RC>RA) cout << "ACB";
	if(RC>RA&&RA>RB) cout << "BAC";
	if(RC>RB&&RB>RA) cout << "ABC";
	return 0;
}