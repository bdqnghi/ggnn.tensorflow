int f(int n,int a,int b)
{
   int x=0,y,i;
   int m[13];
   if((n%4==0&&n%100!=0)||(n%400==0))
   {   
	   if(a>b)
		   y=f(n,b,a);
	   else
	   {
	   m[1]=31;
	   m[2]=29;
	   m[3]=31;
	   m[4]=30;
	   m[5]=31;
	   m[6]=30;
	   m[7]=31;
	   m[8]=31;
	   m[9]=30;
       m[10]=31;
	   m[11]=30;
	   m[12]=31;
       for(i=a;i<b;i++)
	   {
		   x=x+m[i];
	   }
       if(x%7==0)
		   y=1;
	   else y=0;
	   }
   }
   else 
   {
	   if(a>b)
		   y=f(n,b,a);
	   else
	   {
	   m[1]=31;
	   m[2]=28;
	   m[3]=31;
	   m[4]=30;
	   m[5]=31;
	   m[6]=30;
	   m[7]=31;
	   m[8]=31;
	   m[9]=30;
       m[10]=31;
	   m[11]=30;
	   m[12]=31;
       for(i=a;i<b;i++)
	   {
		   x=x+m[i];
	   }
       if(x%7==0)
		   y=1;
	   else y=0;
	   }
   }
   return(y);
}
int main()
{
	int n,m,a,b,y,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&m,&a,&b);
		y=f(m,a,b);
		if (y==1)
			printf("YES\n");
		if(y==0)
             printf("NO\n");
	}
	return 0;
}


		