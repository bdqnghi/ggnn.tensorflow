
	
int main ()
{
	int z,q,s,l ;
	for (z = 1; z <=5;z++)
		for(q=1;q<=5;q++)
			for(s=1 ;s<=5;s++)
				for(l=1;l<=5;l++)
				{
					if (z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l)
						if ((z+q ==s+l)&&(z+l>s+q)&&(z+s)<q)
						{
							if(z==5)cout<<"z "<<10*z<<endl;
							if(q==5)cout<<"q "<<10*q<<endl;
							if(s==5)cout<<"s "<<10*s<<endl;
							if(l==5)cout<<"l "<<10*l<<endl;
							if(z==4)cout<<"z "<<10*z<<endl;
							if(q==4)cout<<"q "<<10*q<<endl;
							if(s==4)cout<<"s "<<10*s<<endl;
							if(l==4)cout<<"l "<<10*l<<endl;
							if(z==3)cout<<"z "<<10*z<<endl;
							if(q==3)cout<<"q "<<10*q<<endl;
							if(s==3)cout<<"s "<<10*s<<endl;
							if(l==3)cout<<"l "<<10*l<<endl;
							if(z==2)cout<<"z "<<10*z<<endl;
							if(q==2)cout<<"q "<<10*q<<endl;
							if(s==2)cout<<"s "<<10*s<<endl;
							if(l==2)cout<<"l "<<10*l<<endl;
							if(z==1)cout<<"z "<<10*z<<endl;
							if(q==1)cout<<"q "<<10*q<<endl;
							if(s==1)cout<<"s "<<10*s<<endl;
							if(l==1)cout<<"l "<<10*l<<endl;
						}
				}


	return 0;
}