int main()
{
	int a,b,c,as,bs,cs;
	for (a=1;a<=3;a++)
		for(b=1;b<=3;b++)
			for(c=1;c<=3;c++)
			{
				as=(b>a)+(c==a);
				bs=(a>b)+(a>c);
				cs=(c>b)+(b>a);
				if (!((a<=b)&&(as<=bs)||(a<=c)&&(as<=cs)||(b<=a)&&(bs<=as)||(b<=c)&&(bs<=cs)||(c<=a)&&(cs<=as)||(c<=b)&&(cs<=bs)))
				{
					char shuzu[4];
				shuzu[a]='A';
				shuzu[b]='B';
				shuzu[c]='C';
				for (int i=1;i<=3;i++)
					cout<<shuzu[i];
				}
			}
			return 0;
}
