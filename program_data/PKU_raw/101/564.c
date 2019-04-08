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
					if(a==0)cout<<'A';
					if(b==0)cout<<'B';
					if(c==0)cout<<'C';
					if(a==1)cout<<'A';
					if(b==1)cout<<'B';
					if(c==1)cout<<'C';
                    if(a==2)cout<<'A';
					if(b==2)cout<<'B';
					if(c==2)cout<<'C';
					break;
				}
			}
		}
	return 0;
}