void main ()
{ int i,j,k,l,d,sum=0;
int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int a[2][3];
  for(i=0;i<2;i++)
	  for(j=0;j<3;j++)
		  scanf("%d",&a[i][j]);
if((a[1][0]-a[0][0])>=1)
{   if(a[0][0]%4==0&&a[0][0]%100!=0||a[0][0]%400==0)
{ sum=sum+1;
 for(i=a[0][1];i<13;i++)
 {
	 sum=sum+days[i];
 }
 sum=sum-a[0][2];
}
    else{
 for(i=a[0][1];i<13;i++)
 {
	 sum=sum+days[i];
 }
 sum=sum-a[0][2];
}

for(i=a[0][0]+1;i<=a[1][0]-1;i++)
{if(i%4==0&&i%100!=0||i%400==0)
	 sum=sum+366;
 else
	 sum=sum+365;
}
   if(a[1][0]%4==0&&a[1][0]%100!=0||a[1][0]%400==0)
{ sum=sum+1;
 for(i=0;i<a[1][1];i++)
 {
	 sum=sum+days[i];
 }
 sum=sum+a[1][2];
}
    else{
 for(i=0;i<a[1][1];i++)
 {
	 sum=sum+days[i];
 }
 sum=sum+a[1][2];
}
}
else 
{   if(a[0][0]%4==0&&a[0][0]%100!=0||a[0][0]%400==0)
	{    sum=sum+a[0][2]+a[1][2];
         days[2]=days[2]+1;
      for(i=a[0][1]+1;i<a[1][1];i++)
	  {
	 sum=sum+days[i];
	  }
	}
   else
   {	if(a[0][1]!=a[1][1])
		{ sum=sum+a[0][2]+a[1][2];
			 for(i=a[0][1]+1;i<a[1][1];i++)
			 {
				sum=sum+days[i];
			 }
		}
	 else
      sum=a[1][2]-a[0][2];
   }
}
 printf("%d",sum);
}
