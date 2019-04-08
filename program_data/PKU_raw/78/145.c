
int main()
{   
 int z,q,s,l,k;
 for(z=10;z<=50;z=z+10)
 {   k=0;
  for(q=10;q<=50;q=q+10)
   {
    for(s=10;s<=50;s=s+10)
    {
     for(l=10;l<=50;l=l+10)
    {  k=(z+q==s+l)+(z+l>s+q)+(z+s<q)+(z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l);
             if(k==4)
        break;
    }   
     if(k==4)
     break;
  }
  if(k==4)
   break;
  }
     if(k==4)
   break;
 }
 cout<<"l "<<l<<endl;
 cout<<"q "<<q<<endl;
 cout<<"z "<<z<<endl;
 cout<<"s "<<s<<endl;
 return 0;
}
 
 
