int main(){
int z,q,s,l,a,b,c;
z=q=s=l=10;

    for(z=10;z<=50;z=z+10)
    {
  for(q=10;q<=50;q=q+10)
  {
  for(s=10;s<=50;s=s+10)
  {
  for(l=10;l<=50;l=l+10)
  {
  a=z+q,b=z+l,c=z+s;
  if(a==s+l&&b>s+q&&c<q)
  {
  cout<<"l "<<l<<endl<<"q "<<q<<endl<<"z "<<z<<endl<<"s "<<s<<endl;
  }
  }
  }
  }
    }
return 0;
}