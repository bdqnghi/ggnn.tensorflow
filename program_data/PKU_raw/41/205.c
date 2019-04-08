int main (  )
{
  int mingci[6];
  int a,b,c,d,e;
  int a1,a2,a3,a4,a5,zong;
  for(a=1;a<=5;a++)
  {
	  for(b=1;b<=5;b++)
	  {
		  if(a==b)continue;
		  else for(c=1;c<=5;c++)
		  {
			  if(a==c||b==c)continue;
			  else for(d=1;d<=5;d++)
			  {
				  if(a==d||b==d||c==d)continue;
				  else e=15-a-b-c-d;
				  if((e==1)&&(d==1)&&(a!=1)&&(a!=2)&&(c!=1)&&(a!=5))
				  {
				   mingci[a]=a;
				   mingci[b]=b;
				   mingci[c]=c;
				   mingci[d]=d;
                   mingci[e]=e;
				   cout<<15-mingci[b]-mingci[c]-mingci[d]-mingci[e]<<" "<<mingci[b]<<" "<<mingci[c]<<" "<<mingci[d]<<" "<<mingci[e]<<endl;
				  }
				  else if((e!=2)&&(e!=3)&&(d!=1))
				  {
					  if((d==2)&&(c!=1))
					  {
                       a1=((a==1)&&(e==1)&&(b!=2)&&(a!=5));
				       a2=((b==1)&&(b==2)&&(e!=1)&&(a!=5));
				       zong=a1+a2;
					   if(zong==1){mingci[a]=a;
				       mingci[b]=b;
				       mingci[c]=c;
				       mingci[d]=d;
                       mingci[e]=e;
					   cout<<15-mingci[b]-mingci[c]-mingci[d]-mingci[e]<<" "<<mingci[b]<<" "<<mingci[c]<<" "<<mingci[d]<<" "<<mingci[e]<<endl;}
					  }
					  if((d!=2)&&(c==1)&&(a==5))
					  {
				        a2=((b==2)&&(b==2)&&(e!=1));
						if(a2==1)mingci[a]=a;
				       mingci[b]=b;
				       mingci[c]=c;
				       mingci[d]=d;
                       mingci[e]=e;
                       cout<<mingci[a]<<" "<<mingci[b]<<" "<<mingci[c]<<" "<<mingci[d]<<" "<<mingci[e]<<endl;
					  }
				  }
			  }
		  }
	  }
  }
	return 0;
}