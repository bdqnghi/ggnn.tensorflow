int differ(int a,int b,int c,int d);
int main()
{
	int z,q,s,l;
	for(z=10;z<=50;z+=10)
		for(q=10;q<=50;q+=10)
			for(s=10;s<=50;s+=10)
				for(l=10;l<=50;l+=10)
					if(differ(z,q,s,l)==0)
						if(z+q==s+l)
							if(z+l>s+q)
								if(z+s<q)
									cout<<"l "<<l<<endl<<"q "<<q<<endl<<"z "<<z<<endl<<"s "<<s<<endl;
	return 0;
}

int differ(int a,int b,int c,int d)
{
	int p=1;
	p*=(a-b);
	p*=(a-c);
	p*=(a-d);
	p*=(b-c);
	p*=(b-d);
	p*=(c-d);
	if(p==0)
		return 1;
	else
		return 0;
}
