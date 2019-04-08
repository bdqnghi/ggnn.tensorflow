int main()
{
	int z,q,s,l,a,b,c,d;
	for(z=10;z<=50;z+=10)
		for(q=10;q<=50;q+=10)
		{
			if(q==z) continue;
			for(s=10;s<=50;s+=10)
			{
				if(s==q||s==z) continue;
				for(l=10;l<=50;l+=10)
				{
					if(l==s||l==q||l==z) continue;
					if(z+q==s+l&&z+l>s+q&&z+s<q)
					{
						a=(z>q)+(z>s)+(z>l);
						b=(q>z)+(q>s)+(q>l);
						c=(s>z)+(s>q)+(s>l);
						d=(l>z)+(l>q)+(l>s);
						if(a==3) cout<<"z"<<" "<<z<<endl;
						if(b==3) cout<<"q"<<" "<<q<<endl;
						if(c==3) cout<<"s"<<" "<<s<<endl;
						if(d==3) cout<<"l"<<" "<<l<<endl;
						if(a==2) cout<<"z"<<" "<<z<<endl;
						if(b==2) cout<<"q"<<" "<<q<<endl;
						if(c==2) cout<<"s"<<" "<<s<<endl;
						if(d==2) cout<<"l"<<" "<<l<<endl;
						if(a==1) cout<<"z"<<" "<<z<<endl;
						if(b==1) cout<<"q"<<" "<<q<<endl;
						if(c==1) cout<<"s"<<" "<<s<<endl;
						if(d==1) cout<<"l"<<" "<<l<<endl;
						if(a==0) cout<<"z"<<" "<<z<<endl;
						if(b==0) cout<<"q"<<" "<<q<<endl;
						if(c==0) cout<<"s"<<" "<<s<<endl;
						if(d==0) cout<<"l"<<" "<<l<<endl;
					}
				}
			}
		}
		return 0;
}