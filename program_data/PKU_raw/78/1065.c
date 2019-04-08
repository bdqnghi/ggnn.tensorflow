int main()
{
	int z,q,s,l,e=0,a,b,c,d;
	for(q=3;q<=5;q++)
	{
		for(z=1;z<=5;z++)
		{
			for(s=1;s<=5;s++)
			{
				for(l=1;l<=5;l++)
				{
					if(z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l&&(z+q)==(s+l)&&(z+l)>(s+q)&&(z+s)<q) 
					{e=1; break;}
				}
				if(e==1) break;
			}
			if(e==1) break;
		}
		if(e==1) break;
	}
	z*=10;
	q*=10;
	s*=10;
	l*=10;
	if(q>l) 
	{
		cout<<"q "<<q<<endl;
		if(l>z&&l>s) 
		{
			cout<<"l "<<l<<endl;
			if(z>s)
				cout<<"z "<<z<<endl<<"s "<<s<<endl;
			else cout<<"s "<<s<<endl<<"z "<<z<<endl;
		}
		else if(z>l&&z>s) 
		{
			cout<<"z "<<z<<endl;
			if(l>s)
				cout<<"l "<<l<<endl<<"s "<<s<<endl;
			else cout<<"s "<<s<<endl<<"l "<<l<<endl;
		}
		else if(s>l&&s>z) 
		{
			cout<<"s "<<s<<endl;
			if(l>z)
				cout<<"l "<<l<<endl<<"z "<<z<<endl;
			else cout<<"z "<<z<<endl<<"l "<<l<<endl;
		}
	}
	else
		{
		cout<<"l "<<l<<endl;
		if(q>z&&q>s) 
		{
			cout<<"q "<<q<<endl;
			if(z>s)
				cout<<"z "<<z<<endl<<"s "<<s<<endl;
			else cout<<"s "<<s<<endl<<"z "<<z<<endl;
		}
		else if(z>q&&z>s) 
		{
			cout<<"z "<<z<<endl;
			if(q>s)
				cout<<"q "<<q<<endl<<"s "<<s<<endl;
			else cout<<"s "<<s<<endl<<"q "<<q<<endl;
		}
		else if(s>q&&s>z) 
		{
			cout<<"s "<<s<<endl;
			if(q>z)
				cout<<"q "<<q<<endl<<"z "<<z<<endl;
			else cout<<"z "<<z<<endl<<"q "<<q<<endl;
		}
	}
	return 0;
}

 