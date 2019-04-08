int main()
{
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int mon[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    int w,i,a;
	scanf("%d",&w);
	mon[0]=13;
    for (i=1; i<13; i++){
       mon[i]=mon[i-1]+month[i-1];
	   a=((mon[i] % 7)+w-1)% 7;
	   if (a==5) {
		   printf("%d\n",i);
	   }
	   }
	return 0;
}