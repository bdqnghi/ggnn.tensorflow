int main ()
{
	int a,b, c,d,e,f,s,i;
	for(i=0;1;i++)
	{
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
			break;
		else
		{
			s=((d+12)*60*60+e*60+f)-(a*60*60+b*60+c);
			printf("%d\n",s);
		}
	}
	return 0;
}