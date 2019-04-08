int main()
{
	int z,q,s,l;
	for(z=10;z<60;z+=10)
		for(q=10;q<60;q+=10)
			for(s=10;s<60;s+=10)
				for(l=10;l<60;l+=10)
				{
					int w1,w2,w3,w4;
					w1=(z+q==s+l);
					w2=(z+l>s+q);
					w3=(z+s<q);
					w4=(z!=q)&&(z!=s)&&(z!=l)&&(q!=s)&&(q!=l)&&(s!=l);
					if(w1&&w2&&w3&&w4==1)
					{
						cout<<"l"<<" "<<l<<endl;
						cout<<"q"<<" "<<q<<endl;
						cout<<"z"<<" "<<z<<endl;
						cout<<"s"<<" "<<s<<endl;
					}
						
				}

	return 0;
}