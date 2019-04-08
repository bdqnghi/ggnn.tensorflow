int w(int m)
{
int d=2,e=1;
for(;d<=sqrt(m);d=d+1)
{
	if(m%2==0)
		{e=0;
		break;}
	if(m%d==0)
		{e=0;
		break;}
}
return(e);
}
void main()
{
int a;
scanf("%d",&a);
int b=2,c=6;
for(;c<=a;c+=2)
{
	b=2;
		for(;b<c;b++)
		{
			if(w(b)!=0&&w(c-b)!=0&&(c-b)!=2)
				{printf("%d=%d+%d\n",c,b,c-b);
				break;}		
		}
}
	
}