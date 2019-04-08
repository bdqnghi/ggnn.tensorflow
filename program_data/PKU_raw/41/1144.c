


int main()
{
	int name[6]={0};
	int c[6]={0};       //??????


for(name[1]=1;name[1]<=5;name[1]++)
{
	for(name[2]=1;name[2]<=5;name[2]++)
	{
	   if(name[2]==name[1])
		   continue;
		for(name[3]=1;name[3]<=5;name[3]++)
	   {
		   if(name[3]==name[1]||name[3]==name[2])
			   continue;
		   for(name[4]=1;name[4]<=5;name[4]++)
		   {
			   if(name[4]==name[1]||name[4]==name[2]||name[4]==name[3])
				   continue;

			   name[5]=15-name[1]-name[2]-name[3]-name[4];
                      c[1]=(name[5]==1);
                      c[2]=(name[2]==2);
                      c[3]=(name[1]==5);
                      c[4]=(name[3]!=1);
                      c[5]=(name[4]==1);
					  int x1,x2,x3,x4,x5;
					  for(int i=1;i<=5;i++)
					  {
						  if(name[i]==1)
							  x1=(c[i]==1);
						  else if(name[i]==2)
						      x2=(c[i]==1);
						  else if(name[i]==3)
						      x3=(c[i]==0);
						  else if(name[i]==4)
						      x4=(c[i]==0);
						  else if(name[i]==5)
						      x5=(c[i]==0);
						  
					  }
					  if( x1&&x2&&x3&&x4&&x5&&name[5]!=2&&name[5]!=3)
					  {
						  for(int k=1;k<=4;k++)
						  cout<<name[k]<<" ";
						  cout<<name[5];
					  }

						 
		   }
	   }
	}
}
   

}


