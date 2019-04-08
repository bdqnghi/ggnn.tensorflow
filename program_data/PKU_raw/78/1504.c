//??? ??? 20121024 

main()
{
	int z,q,s,l;    //??????

	
	for(z=1;z<6;z++)
		for(q=1;q<6;q++)
			for(s=1;s<6;s++)
				for(l=1;l<6;l++)
					if(z+q==s+l&&z+l>s+q&&z+s<q)	//???? 
					{
						//?????? 
						for(;;)
						{
							if(z==5)
							{
								cout<<"z 50"<<endl;break;
							}
							
							if(q==5)
							{
								cout<<"q 50"<<endl;break;
							}
							
							
							if(s==5)
							{
								cout<<"s 50"<<endl;break;
							}
							
							if(l==5)
							{
								cout<<"l 50"<<endl;break;
							}
							break;
						}
							
						for(;;)
						{
							if(z==4)
							{
								cout<<"z 40"<<endl;break;
							}
							
							if(q==4)
							{
								cout<<"q 40"<<endl;break;
							}
							
							
							if(s==4)
							{
								cout<<"s 40"<<endl;break;
							}
							
							if(l==4)
							{
								cout<<"l 40"<<endl;break;
							}
							break;
						}
						
						for(;;)
						{
							if(z==3)
							{
								cout<<"z 30"<<endl;break;
							}
							
							if(q==3)
							{
								cout<<"q 30"<<endl;break;
							}
							
							
							if(s==3)
							{
								cout<<"s 30"<<endl;break;
							}
							
							if(l==3)
							{
								cout<<"l 30"<<endl;break;
							}
							break;
						}
						
						for(;;)
						{
							if(z==2)
							{
								cout<<"z 20"<<endl;break;
							}
							
							if(q==2)
							{
								cout<<"q 20"<<endl;break;
							}
							
							
							if(s==2)
							{
								cout<<"s 20"<<endl;break;
							}
							
							if(l==2)
							{
								cout<<"l 20"<<endl;break;
							}
							break;
						}
						
						for(;;)
						{
							if(z==1)
							{
								cout<<"z 10"<<endl;break;
							}
							
							if(q==1)
							{
								cout<<"q 10"<<endl;break;
							}
							
							
							if(s==1)
							{
								cout<<"s 10"<<endl;break;
							}
							
							if(l==1)
							{
								cout<<"l 10"<<endl;break;
							}
							break;
						}
					}
						
						return 0;	//???? 
}

