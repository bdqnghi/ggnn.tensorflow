int main()
{
 int a[6];
 int sum;
 int i,j=0;
 int m;
 do{
	   scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);  
	   a[3]=a[3]+12;
	   sum=(a[3]-a[0]-1)*3600+(60-a[1]-1+a[4])*60+60-a[2]+a[5];
	   if(a[0]==0)
	     return 0;
	   else
	     printf("%d\n",sum);
    }
 while(a[0]!=0);

 return 0;

}