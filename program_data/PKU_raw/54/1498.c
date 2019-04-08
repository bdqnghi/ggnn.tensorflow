int pg(int x,int y)
{
 int an[1000],i,j;
 an[x]=y;
 do
 {
   an[x]=an[x]+x;
   for(i=x-1;i>0;i--)
   {
    if(an[i+1]%(x-1)!=0)
		break;
	else an[i]=an[i+1]/(x-1)*x+y;
   }
 }while(i>0);
 return (an[1]);
}
int main()
{
 int n,k;
 cin>>n>>k;
 cout<<pg(n,k);
 return 0;
}