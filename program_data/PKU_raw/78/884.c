int main()
{
    int z,q,s,l,a1,b2,c3,i;
    
    for(z=10;z<60;z=z+10)
        for(q=10;q<60;q=q+10)
          
	        for(s=10;s<60;s=s+10)
                 
		       for(l=10;l<60;l=l+10)
			   {
		      
                            a1=(z+q==s+l);
                            b2=((z+l)>(s+q));
                            c3=((z+s)<q);
                            if(a1+b2+c3==3)
                            {
                              if(z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l)
                                {for(i=50;i>=10;i=i-10)
                                  {
                                      if(z==i) cout<<"z"<<' '<<z<<endl;
                                      if(q==i) cout<<"q"<<' '<<q<<endl;
                                      if(s==i) cout<<"s"<<' '<<s<<endl;
                                      if(l==i) cout<<"l"<<' '<<l<<endl;
                                   }
                                  }
                              }
                        }
	return 0;
}