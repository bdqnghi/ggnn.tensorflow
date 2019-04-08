int main()

{
	int z=1,q=1,s=1,l=1;
	for(z=1;z<=5;z++)
	{
		for(q=1;q<=5;q++)
		{
			for(s=1;s<=5;s++)
			{
				for(l=1;l<=5;l++)
					if(z+q==s+l&&z+l>s+q&&z+s<q&&z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l)
						cout<<"l"<<' '<<l*10<<'\n'<<"q"<<' '<<q*10<<endl<<"z"<<' '<<z*10<<'\n'<<"s"<<' '<<s*10<<'\n';
			}
		}
	}
	return 0;
		
}
