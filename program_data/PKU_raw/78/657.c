
//============================================================================
// Name        : 1.cpp
// Author      : ???
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++
//============================================================================


int main()
{
    int i=0,z=0,q=0,s=0,l=0;  //?z,q,s,l????
    for(int z=1;z<=5;z=z+1)
    {

    	for(int q=1;q<=5;q=q+1)
    	{

    		for(int s=1;s<=5;s=s+1)
    		{

    			for(int l=0;l<=5;l=l+1)
    			{
    				if(((z+q)==(s+l))+((z+l)>(s+q))+((z+s)<q)==3)
    				{
					   if(l>q)
					   {
						cout<<"l"<<" "<<l*10<<endl;
						cout<<"q"<<" "<<q*10<<endl;

						    if(z>s)
						    {
							cout<<"z"<<" "<<z*10<<endl;
							cout<<"s"<<" "<<s*10<<endl;
							return 0;
						   }
						else if(s>z)
						{
							cout<<"s"<<" "<<s*10<<endl;
							cout<<"z"<<" "<<z*10<<endl;
						}
					    }
					    else if(q>l)
					     {
					    cout<<"q"<<" "<<q*10<<endl;
					    cout<<"l"<<" "<<l*10<<endl;

					    	if(z>s)
					    	{
					    	cout<<"z"<<" "<<z*10<<endl;
					    	cout<<"s"<<" "<<s*10<<endl;
					    	}
					    	else if(s>z)
					    	{
					    	cout<<"s"<<" "<<s*10<<endl;
					    	cout<<"z"<<" "<<z*10<<endl;
					    	}

					       }
    				}




    			}

    		}

    	}
    	    }
    return 0;

}