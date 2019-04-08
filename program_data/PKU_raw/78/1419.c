int main()
{	
	int z=0,q=0,s=0,l=0;
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for(s=1;s<=5;s++)
				for(l=1;l<=5;l++)
				{if ((z+q==s+l)&&(z+l>s+q)&&(z+s<q)==1)
				{cout<<"l "<<(10*l)<<endl;
				cout<<"q "<<(10*q)<<endl;
				cout<<"z "<<(10*z)<<endl;
				cout<<"s "<<(10*s)<<endl;break;}
				}
	return 0;
}
