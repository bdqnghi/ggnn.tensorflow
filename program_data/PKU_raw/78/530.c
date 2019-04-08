int main()
{   int sum=0;
    int z,q,s,l;
    int zw,qw,sw,lw; 
    for(z=1;z<=5;z++)
       for(q=1;q<=5;q++)
       {  if(q==z)   continue; 
          for(s=1;s<=5;s++)
          {  if(z==s||q==s)   continue; 
             for(l=1;l<=5;l++)
              {  if(l==z||l==q||l==s)   continue; 
                 sum=(z+q==s+l)+(z+l>s+q)+(z+s<q);
                 if(sum==3)
                 {        zw=z;qw=q;sw=s;lw=l;  }
    }}}
    if( qw>lw && zw>sw )  
    {  
        cout<<"q "<<qw*10<<endl<<"l "<<lw*10<<endl<<"z "<<zw*10<<endl<<"s "<<sw*10<<endl;  
    }  
    if( qw>lw && sw>zw )    
    {  
       cout<<"q "<<qw*10<<endl<<"l "<<lw*10<<endl<<"s "<<sw*10<<endl<<"z "<<zw*10<<endl;  
    }  
    if( lw>qw && sw>zw )  
    {  
         cout<<"l "<<lw*10<<endl<<"q "<<qw*10<<endl<<"s "<<sw*10<<endl<<"z "<<zw*10<<endl;   
    }  
    if( lw>qw && zw>sw ) 
    {  
         cout<<"l "<<lw*10<<endl<<"q "<<qw*10<<endl<<"z "<<zw*10<<endl<<"s "<<sw*10<<endl;   
    }   
       return 0;
}
 
