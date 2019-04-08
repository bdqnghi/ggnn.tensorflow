int main(){
int p=0,q=0,r=0;
for(p=0;p<=2;p=p+1)//?p q r ????A B C????????0?1?2?
{
 for(q=0;q<=2;q=q+1)
 {
for(r=0;r<=2;r=r+1)
{
if(p!=q&&q!=r&&r!=p)
{
if((2-p)==(p<q)+(r==p)&&(2-q)==(p>q)+(p>r)&&(2-r )==(r>q)+(q>p))//2-p,2-q,2-r?????ABC???????
{
if(p>q&&q>r)
{ cout<<"C"<<"B"<<"A";}
    else if(p>r&&r>q)
{ cout<<"B"<<"C"<<"A";}
else if(q>p&&p>r)
{ cout<<"C"<<"A"<<"B";}
else if(q>r&&r>p)
{ cout<<"A"<<"C"<<"B";}
else if(r>p&&p>q)
{ cout<<"B"<<"A"<<"C";}
else if(r>q&&q>p)
{ cout<<"A"<<"B"<<"C";}
}//??????????????????
}
}
 }
}
return 0;
}