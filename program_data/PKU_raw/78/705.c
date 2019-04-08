int main()
{
    int z,q,s,l;
    int b[4]={z,q,s,l};
    int cc1,cc2,cc3,cc4;
    int sum;
char num=' ';
for(z=1;z<6;z++)
  for(q=1;q<6;q++)
    for(s=1;s<6;s++)
    for(l=1;l<6;l++)
    {
cc1=(z+l)>(s+q);
cc2=(z+s)<q;
cc3=(z!=q)&&(z!=s)&&(z!=l)&&(s!=q)&&(l!=q)&&(s!=l);
cc4=(z+q)==(s+l);
sum=cc1&&cc2&&cc3&&cc4;
if(sum==1)
{
for(int i=5;i>0;i--)
{
if(z==i) cout<<"z "<<z*10<<endl;
if(q==i) cout<<"q "<<q*10<<endl;
if(s==i) cout<<"s "<<s*10<<endl;
if(l==i) cout<<"l "<<l*10<<endl;
}
    }
    }
    return 0;
}