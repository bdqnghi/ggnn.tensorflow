
void f(int z,int q,int s,int l)
{
	int i;
	for(i=5;i>0;i--)
	{
		if(z==i) cout<<"z "<<10*i<<endl;
		if(q==i) cout<<"q "<<10*i<<endl;
		if(s==i) cout<<"s "<<10*i<<endl;
		if(l==i) cout<<"l "<<10*i<<endl;
	}
}

int main()
{
	int z,q,s,l;
	for(z=1;z<6;z++)
	{
		//if(z==2) cout<<2<<endl;
		for(q=1;q<6;q++)
		{
			if(q!=z)//if(z==2&&q==4) cout<<q<<endl;

			for(s=1;s<6;s++)
			{
				if(s!=q&&s!=z)
				{

				//if(z==2&&q==4&&s==1) cout<<2<<endl;
				l=z+q-s;
				if(l>0&&l<6&&l!=z&&l!=q&&l!=s)
					if(z+l>s+q)
						if(z+s<q)
							f(z,q,s,l);
				}
			}
		}
	}
	return 0;
}