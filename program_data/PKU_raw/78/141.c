int main ()
{
int z,q,s,l;
for (z=1;z<=5;z++)
for (q=1;q<=5;q++)
for (s=1;s<=5;s++)
for (l=1;l<=5;l++)
if (z+q==s+l&&z+l>s+q&&z+s<q) 
{
cout <<"l "<<10*l<<endl<<"q "<<10*q<<endl<<"z "<<10*z<<endl<<"s "<<10*s<<endl;
}
return 0 ;
}