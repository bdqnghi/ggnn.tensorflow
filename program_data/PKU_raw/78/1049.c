//???
int main()
{
	int z,q,s,l;
	for (z=10;z<=50;z=z+10)//??????
	{
		for (q=10;q<=50;q=q+10)
		{
			if (q==z)
				continue;
			for (s=10;s<=50;s=s+10)
			{
				if (s==z||s==q)
					continue;
				for (l=10;l<=50;l=l+10)
				{
					if (l==z||l==q||l==s)
						continue;
					if ((z+q==s+l)&&(z+l>s+q)&&(z+s<q))//??
					{
						if (z==50) cout<<'z'<<' '<<z<<endl;
						if (q==50) cout<<'q'<<' '<<q<<endl;
						if (s==50) cout<<'s'<<' '<<s<<endl;
						if (l==50) cout<<'l'<<' '<<l<<endl;
						if (z==40) cout<<'z'<<' '<<z<<endl;
						if (q==40) cout<<'q'<<' '<<q<<endl;
						if (s==40) cout<<'s'<<' '<<s<<endl;
						if (l==40) cout<<'l'<<' '<<l<<endl;
						if (z==30) cout<<'z'<<' '<<z<<endl;
						if (q==30) cout<<'q'<<' '<<q<<endl;
						if (s==30) cout<<'s'<<' '<<s<<endl;
						if (l==30) cout<<'l'<<' '<<l<<endl;
						if (z==20) cout<<'z'<<' '<<z<<endl;
						if (q==20) cout<<'q'<<' '<<q<<endl;
						if (s==20) cout<<'s'<<' '<<s<<endl;
						if (l==20) cout<<'l'<<' '<<l<<endl;
						if (z==10) cout<<'z'<<' '<<z<<endl;
						if (q==10) cout<<'q'<<' '<<q<<endl;
						if (s==10) cout<<'s'<<' '<<s<<endl;
						if (l==10) cout<<'l'<<' '<<l<<endl;
					}
				}
			}
		}
	}
	return 0;
}