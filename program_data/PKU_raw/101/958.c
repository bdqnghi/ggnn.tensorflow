int main()
{
	int a[5],markA=0,markB=0,markC=0;
	for(int x=1;x<=3;x++)
	{
		for(int y=1;y<=3;y++)
		{
			for(int z=1;z<=3;z++)
			{
				if(x!=y && y!=z && x!=z)
				{
				 a[x]=3;a[y]=2;a[z]=1;
				 //for A
				 markA=0;markB=0;markC=0;
				 if (a[2]>a[1]) markA++;
				 if (a[1]>a[2]) markB++;
				 if (a[1]>a[3]) markB++;
				 if (a[3]>a[2]) markC++;
				 if (a[2]>a[1]) markC++;
				 if(markA==3-a[1] && markB==3-a[2] && markC==3-a[3])
			 	 {
					if(a[1]<a[2] && a[1]<a[3]) 
					{
					  cout<<"A";
					  if(a[2]<a[3]) cout<<"BC"; else cout<<"CB";
				    }
					else if(a[2]<a[3] && a[2]<a[1])
					{
					  cout<<"B";
					  if(a[1]<a[3]) cout<<"AC"; else cout<<"CA";
			    	}
			    	else
			    	{
			    	  cout<<"C";
			    	  if(a[1]<a[2]) cout<<"AB"; else cout<<"BA";
			        }
			     }
			    }
			}
		}
	}
	return 0;
}
				
			