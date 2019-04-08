
int bb(int x,int y)
{
     if((x==1)||(x==2))
	 {if(y==1)
	 return 1;
	 else 
		 return 0;
	 }
	 else
	 {if(y==1)
	 return 0;
	 else 
		 return 1;
	 }

}

int main()
{int a,b,c,d,e;
 int as,bs,cs,ds,es;

 for (a=1;a<=5;a++)
 {
     for(b=1;b<=5;b++)
   	 {if(a==b)
	 continue;
	     for(c=1;c<=5;c++)
		 {if(a==c||b==c)
		 continue;
		     for(d=1;d<=5;d++)
			 { if(a==d||b==d||c==d)
				 continue;
			 e=15-a-b-c-d;
			 if(e!=2&&e!=3)
			 {as=(e==1);
			  bs=(b==2);
			   cs=(a==5);
			   ds=(c!=1);
			   es=(d==1);
			   if(bb(a,as)==1&&bb(b,bs)&&bb(c,cs)==1&&bb(d,ds)==1&&bb(e,es)==1)			  
					cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
                        

			    }
	
			 }  
      
		 }

	 }
	 
 }


return 0;

}