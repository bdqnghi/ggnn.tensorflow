int main()
{
	   int d[12]={0};
       int a,b,c,i,sum=0;
	   int run(int x);
	   scanf("%d%d%d",&a,&b,&c);
	   for(i=1;i<b;i++)
	   {
           if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10))
		   {
			   d[i]=31;
			   sum+=d[i];
		   }
	       else if((i==4)||(i==6)||(i==9)||(i==11))
		   {
			   d[i]=30;
			   sum+=d[i];
		   }
	       else 
		   {
		       if(run(a)==1)d[i]=29;
		       else d[i]=28;
			   sum+=d[i];
		   }
	   }
	   sum+=c;
	   printf("%d\n",sum);
}
int run(int x)
{
	int z;
	if((x%400==0)||((x%100!=0)&&(x%4==0)))
		z=1;
	return z;
}