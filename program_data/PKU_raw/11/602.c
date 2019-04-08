int main()
{
int a[12]={0,31,59,90,120,151,181,212,243,273,304,334,365};
int d;
int y;
int i;
int m;
int s=0;
scanf("%d%d%d",&y,&m,&d);

if(((y%4==0)&&(y%100!=0))||(y%400==0))
{ 
    if(m==1||m==2)
     s=a[m-1]+d;
    else s=a[m-1]+d+1;
}
else
s=a[m-1]+d;

		
	


	
	printf("%d",s);
	return 0;
}