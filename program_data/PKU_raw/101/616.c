int main()
{
	int a,b,c;
	for(a=0;a<=2;a++)
		for(b=0;b<=2;b++)
		{
			if(a==b)continue;
			else
			{
				c=3-a-b;
				if(((a+(b>a)+(c==a))==2)&&((b+(a>b)+(a>c))==2)&&((c+(c>b)+(b>a))==2))
				{
					if(a<b&&b<c)cout<<"ABC";
					else if(a<c&&c<b)cout<<"ACB";
					else if(b<a&&a<c)cout<<"BAC";
					else if(b<c&&c<a)cout<<"BCA";
					else if(c<a&&a<b)cout<<"CAB";
					else cout<<"CBA";
					break;
				}
			}
		}
	return 0;
}