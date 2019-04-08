int main()
{
int t,a,b,c,d,e,f;

while(1)
{
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
	{
	    break;
	};
	t=(12-a)*60*60;
	t=t-b*60;
	t=t-c;
	t=t+d*60*60+e*60+f;
	printf("%d\n",t);
}
return 0;
}       