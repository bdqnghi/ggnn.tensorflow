int main()
{
int a,b,c,i;
for(a=0;a<3;a++)
{
for(b=0;b<3;b++)
{
 if(b==a)
	 continue;
 else 
 {
 c=3-a-b;
 if((b>a)+(c==a)+a==(a>b)+(a>c)+b&&(a>b)+(a>c)+b==(c>b)+(b>a)+c      )
 {
   for(i=0;i<3;i++)
   {
   if(a==i)
	   cout<<"A";
   if(b==i)
	   cout<<"B";
   if(c==i)
	   cout<<"C";
   }
 
 }
 }
 
}

}
return 0;

}