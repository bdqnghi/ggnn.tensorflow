int main()
{int z,q,s,l;
for (z=10;z<=50;z+=10)
{
	for (q=10;q<=50;q+=10)
	{	for (s=10;s<=50;s+=10)
		{	for (l=10;l<=50;l+=10)
				{
					if ( z+q==s+l&&z+l>s+q&&z+s<q&&z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l )
	{
				cout<<"l "<<l<<endl<<"q "<<q<<endl<<"z "<<z<<endl<<"s "<<s;
				
	}

	}
	}
	}
}
return 0;
}