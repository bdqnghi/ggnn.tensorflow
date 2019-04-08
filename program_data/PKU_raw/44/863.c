
void main()
{
int a[6],i;
int reverse(int dividend);
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);

printf("%d\n",reverse(a[i]));
}
}

int reverse(int devidend)
{
int result=0,remainder;
   
if(devidend<0) 
{
	devidend=fabs(devidend);
 
     while(devidend>0)
     {
     remainder=devidend%10;result=result*10+remainder;
     devidend=devidend/10;
     }
   
    result=-result;
   }
  
   else if(devidend>=0)
   {
	   do 
   {
   remainder=devidend%10;result=result*10+remainder;
   devidend=devidend/10;
   }
    while(devidend>0);
   }
return(result);
}