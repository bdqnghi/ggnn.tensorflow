int main ()
{
	int a,b,c,d,e;
	int A,B,C,D,E;
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			if(b==a)
			{
				continue;
			}
			else
			{
				for(c=1;c<=5;c++)
				{
					if(c==b||c==a)
					{
						continue;
					}
					else
					{
						for(d=1;d<=5;d++)
						{
							if(d==a||d==b||d==c)
							{
								continue;
							}
							else
							{
								e=15-a-b-c-d;
								A=(e==1);
					  B=(b==2);
					  C=(a==5);
					  D=(c!=1);
					  E=(d==1);




					  if((a*b==2)&&e!=2&&e!=3&&A==1&&B==1&&C==0&&D==0&&E==0)
					  {
						  cout << a << " " << b <<" "<< c <<" "<< d<<" "<< e <<  endl;
					  }
					  else if(a*c==2&&e!=2&&e!=3&&A==1&&C==1&&B==0&&D==0&&E==0)
					  {
						  cout << a << " " << b <<" "<< c <<" "<< d<<" "<< e << endl;
					  }
					  else if((a*d)==2&&e!=2&&e!=3&&A==1&&B==0&&C==0&&D==1&&E==0)
					  {
						  cout << a << " " << b <<" "<< c <<" "<< d<<" "<< e <<  endl;
					  }
					  else if((a*e)==2&&e!=2&&e!=3&&A==1&&B==0&&C==0&&D==1&&E==1)
					  {
						  cout << a << " " << b <<" "<< c <<" "<< d<<" "<< e <<  endl;
					  }
					  else if(b*c==2&&e!=2&&e!=3&&A==0&&B==1&&C==1&&D==0&&E==0)
					  {
						  cout << a << " " << b <<" "<< c <<" "<< d<<" "<< e <<endl;
					  }
					  else if(b*d==2&&e!=2&&e!=3&&A==0&&B==1&&C==0&&D==1&&E==0)
					  {
						  cout << a << " " << b <<" "<< c <<" "<< d<<" "<< e <<  endl;
					  }
					  else if(b*e==2&&e!=2&&e!=3&&A==0&&B==1&&C==0&&D==0&&E==1)
					  {
						  cout << a << " " << b <<" "<< c <<" "<< d<<" "<< e <<  endl;
					  }
					  else if(c*d==2&&e!=2&&e!=3&&A==0&&B==0&&C==1&&D==1&&E==0)
					  {
						  cout << a << " " << b <<" "<< c <<" "<< d<<" "<< e <<  endl;
					  }
					  else if(c*e==2&&e!=2&&e!=3&&A==0&&B==0&&C==1&&D==0&&E==1)
					  {
						  cout << a << " " << b <<" "<< c <<" "<< d<<" "<< e <<  endl;
					  }
					  else if(e*d==2&&e!=2&&e!=3&&A==0&&B==0&&C==0&&D==1&&E==1)
					  {
						  cout << a << " " << b <<" "<< c <<" "<< d<<" "<< e <<  endl;
					  }









							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}