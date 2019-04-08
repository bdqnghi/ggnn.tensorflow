int main()
  {
  int z=1,q=1,s=1,l=1,i=1;
   for(z=1;z<=5;z++)
    for(q=1;q<=5;q++)
     for(s=1;s<=5;s++)
      for(l=1;l<=5;l++)
       if(((z+q)==(s+l))+((z+l)>(s+q))+(q>(z+s))==3)
        if((z!=q)&&(q!=s)&&(s!=l)&&(q!=s)&&(s!=l)&&(q!=l))
          
          
         for(i=5;i>=1;i--)
            
         {if(s==i)cout<<"s"<<' '<<10*s<<endl;
          if(z==i)cout<<"z"<<' '<<10*z<<endl;
          if(q==i)cout<<"q"<<' '<<10*q<<endl;
          if(l==i)cout<<"l"<<' '<<10*l<<endl;
         }
        
  
    return 0;
}
