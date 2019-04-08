int re(int num) 
{
	int s;
	s=num/10000+num%10000/1000*10+num%1000/100*100+num%100/10*1000+num%10*10000;
	if(s%10)return(s);
	else if(s%100)return(s/10);
	else if(s%1000)return(s/100);
	else if(s%10000)return(s/1000);
	else return(s/10000);
}
int reverse(int num)
{
	if(num<0)return(-re(-num));
	else return(re(num));
}
void main()
{
	int a[6],i;
	for(i=0;i<6;i++)
	{
	    scanf("%d",&a[i]);
		a[i]=reverse(a[i]);
	}
    for(i=0;i<6;i++)printf("%d\n",a[i]);
}
