
int main()
{
	int z,q,s,l,a,b,c,d;
	char x1,x2,x3,x4;
	for (z=1;z<=5;z++)
	{
        for (q=1;q<=5;q++)
		{
			for (s=1;s<=5;s++)
			{
				for (l=1;l<=5;l++)
				{
					if (z+q==s+l&&z+l>s+q&&z+s<q&&z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l)
					{
						a=z;
						x1='z';
						if (q>a)
						{
							b=a;
							a=q;
							x2=x1;
							x1='q';
						}
						else
						{
							b=q;
							x2='q';
						}
						if (s>b)
						{
							if (s>a)
							{
								c=b;
								b=a;
								a=s;
								x3=x2;
								x2=x1;
								x1='s';
							}
							else
							{
								c=b;
								b=s;
								x3=x2;
								x2='s';
							}
						}
						else
						{
							c=s;
							x3='s';
						}
						if (l>c)
						{
							if (l>b)
							{
								if (l>a)
								{
									d=c;
									c=b;
									b=a;
									a=l;
									x4=x3;
									x3=x2;
									x2=x1;
									x1='l';
								}
								else
								{
									d=c;
									c=b;
									b=l;
									x4=x3;
									x3=x2;
									x2='l';
								}
							}
							else
							{
								d=c;
								c=l;
								x4=x3;
								x3='l';
							}
						}
						else
						{
							d=l;
							x4='l';
						}
					}
				}
			}
		}
	}
	cout<<x1<<" "<<a*10<<endl;
	cout<<x2<<" "<<b*10<<endl;
	cout<<x3<<" "<<c*10<<endl;
	cout<<x4<<" "<<d*10<<endl;
	return 0;
}

