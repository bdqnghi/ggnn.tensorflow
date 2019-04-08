int main()                                   //???
{                                            //?????
	int z=0,q=0,s=0,l=0,i=0,j=0,k=0,m=0,n=0,x=0;    
         //?????z,q,s,l???????????
	for(i=1;i<=5;i++)                   //?????,???????
	{
		z=10*i;
		for(j=1;j<=5;j++)
		{
			q=10*j;
			if(q==z)
                                    continue;
			for(k=1;k<=5;k++)
			{
				s=10*k;
				if(s==z||s==q)
			          	continue;
				for(m=1;m<=5;m++)
				{
				         l=10*m;
					if(l==z||l==q||l==s)
					         continue;
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))                //????????          
					{
						for(n=5;n>=1;n--)                       //?????,?????????
						{
							x=n*10;
							if(z==x)
							{
	
         cout<<"z "<<x<<endl;
							}
                                                                else if(q==x)
							{
								cout<<"q "<<x<<endl;
							}
                                                                else if(s==x)
							{
								cout<<"s "<<x<<endl;
							}
                                                                else if(l==x)
							{
								cout<<"l "<<x<<endl;
							}
						}
					}
				}
			}
		}
	}//?????,??,??????????grids?????           
	return 0;
}
