int main()
{
	int zhishu(int n);
	int m,n,i,w,t,k=0,a=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(i==1)continue ;
		if(i%2==0&&i!=2)continue;/*?????????????*/
		if(i%3==0&&i!=3)continue;
	
			w=log10(i);t=pow(10,w);
		
		
		if(i%10 !=i/t)continue;
	if(w>=3&&(  (i-i%10) /10  ) %10 !=(i/(t/10))%10)continue;/*???????????*/
	if(w>=5  &&    (i/10-     (  (i-i%10) /10  )  %10 ) /10%10  !=  (i/(t/100) )%10  )
		continue;/*????2???????*/
	if(w>=7  &&   (i/10- ((i/10-     (  (i-i%10) /10  )  %10 ) /10%10 ) )/10%10!=  (i/(t/1000) )%10  )
		continue;/*????*/
	if(w>=9  &&   (i/10-((i/10- ((i/10-     (  (i-i%10) /10  )  %10 ) /10%10 ) )/10%10))/10%10!=  (i/(t/10000) )%10  )
		continue;
	if(w>=11  &&   (i/10-((i/10-((i/10- ((i/10-     (  (i-i%10) /10  )  %10 ) /10%10 ) )/10%10))/10%10))/10%10!=  (i/(t/100000) )%10  )
		continue;
		
		
		t=zhishu(i);/*??????*/
		if(t==1&&k==0)
		
		{
			printf("%d",i);
			k++;a=1;
		}
		else if(t==1&&k>0)
		
		printf(",%d",i);


	}
	if(a==0)printf("no");
	return 0;

}
int zhishu(int n)
{
	int t,i,k=0;
	t=sqrt(n)+1;
	for(i=2;i<t;i++)
		if(n%i==0)k++;
		if(k>0)return 0;
		else return 1;

}