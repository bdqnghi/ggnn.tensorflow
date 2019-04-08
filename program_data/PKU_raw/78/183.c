int main()
{
	struct weight
	{
		char name;
		int wei;
	};
	struct weight a1,a2,a3,a4;
	a1.name='z';
	a2.name='q';
	a3.name='s';
	a4.name='l';
	for(a1.wei=1;a1.wei<=5;a1.wei++)
		for(a2.wei=1;a2.wei<=5;a2.wei++)
		{
			if(a2.wei==a1.wei)
				continue;
			for(a3.wei=1;a3.wei<=5;a3.wei++)
			{
				if(a3.wei==a2.wei||a3.wei==a1.wei)
					continue;
				for(a4.wei=1;a4.wei<=5;a4.wei++)
				{
					if(a4.wei==a3.wei||a4.wei==a2.wei||a4.wei==a1.wei)
						continue;
					if(a1.wei+a2.wei==a3.wei+a4.wei&&a1.wei+a3.wei<a2.wei&&a1.wei+a4.wei>a2.wei+a3.wei)
					{
						for(int i=5;i>=1;i--)
						{
							if(a1.wei==i)
								cout<<a1.name<<" "<<(a1.wei*10)<<endl;
							if(a2.wei==i)
								cout<<a2.name<<" "<<(a2.wei*10)<<endl;
							if(a3.wei==i)
								cout<<a3.name<<" "<<(a3.wei*10)<<endl;
							if(a4.wei==i)
								cout<<a4.name <<" "<<(a4.wei*10)<<endl;
						}
					}
				}
			}
		}
		return 0;
}