
int main() {
	int z,q,s,l;
		for(z=1;z<6;z++)
			for(q=1;q<6;q++)
				for(s=1;s<6;s++)
					for(l=1;l<6;l++)
					{
						if(z+q==s+l&z+l>s+q&z+s<q&z!=q!=s!=l)
						{
							if(l>q && q>z && z>s)
							{
								cout<<"l"<<" "<<l*10<<endl;
								cout<<"q"<<" "<<q*10<<endl;
								cout<<"z"<<" "<<z*10<<endl;
								cout<<"s"<<" "<<s*10<<endl;
							}
							if(l>q && q>s && s>z)
							{
								cout<<"l"<<" "<<l*10<<endl;
								cout<<"q"<<" "<<q*10<<endl;
								cout<<"s"<<" "<<s*10<<endl;
								cout<<"z"<<" "<<z*10<<endl;
							}
							if(l>s && s>q && q>z)
							{
							    cout<<"l"<<" "<<l*10<<endl;
								cout<<"s"<<" "<<s*10<<endl;
								cout<<"q"<<" "<<q*10<<endl;
								cout<<"z"<<" "<<z*10<<endl;
							}
							if(s>l && l>q && q>z)
					        {
							   cout<<"s"<<" "<<s*10<<endl;
							   cout<<"l"<<" "<<l*10<<endl;
							   cout<<"q"<<" "<<q*10<<endl;
							   cout<<"z"<<" "<<z*10<<endl;
							}
							if(q>l && l>s && s>z)
						   {
							cout<<"q"<<" "<<q*10<<endl;
							cout<<"l"<<" "<<l*10<<endl;
							cout<<"s"<<" "<<s*10<<endl;
							cout<<"z"<<" "<<z*10<<endl;
						   }
							if(z>l && l>s && s>q)
													   {
														cout<<"z"<<" "<<z*10<<endl;
														cout<<"l"<<" "<<l*10<<endl;
														cout<<"s"<<" "<<s*10<<endl;
														cout<<"q"<<" "<<q*10<<endl;
													   }
							if(z>l && l>q && q>s)
																				   {
																					cout<<"z"<<" "<<z*10<<endl;
																					cout<<"l"<<" "<<l*10<<endl;
																					cout<<"q"<<" "<<q*10<<endl;
																					cout<<"s"<<" "<<s*10<<endl;
																				   }
							if(z>q && q>s && s>l)
																				   {
																					cout<<"z"<<" "<<z*10<<endl;
																					cout<<"q"<<" "<<q*10<<endl;
																					cout<<"s"<<" "<<s*10<<endl;
																					cout<<"l"<<" "<<l*10<<endl;
																				   }
						}
					}
	return 0;
}