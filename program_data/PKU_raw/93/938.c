int main()
{
int n;
int x,y;
x=0,y=0;
cin>>n;
if(n%5==0)
  x=1;
if(n%7==0)                                                         
  y=1;
if(n%3==0)
    {if(x==1||y==1)                                             //??????????x,y????????????? 
        cout<<3<<" ";
    else
        cout<<3;} 
if(n%5==0)
    {if(y==1)
        cout<<5<<" ";
    else
        cout<<5;} 
if(n%7==0)                                                         //?????????????? 
  cout<<7;
if(n%7!=0&&n%3!=0&&n%5!=0)
  cout<<'n';                                                        //???????? 

return 0;
}
 
 
 

 
