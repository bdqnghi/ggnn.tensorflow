
int main()
{
	int a,s;
    scanf("%d",&a);
    for(s=6;s<=a;s=s+2)
	{ int i1,i2;
	for(i1=3;i1<=s;i1=i1+2)
	{i2=s-i1;
	int t,p,a,b;
	t=(int)sqrt(i1);
	p=(int)sqrt(i2);
	for(a=2;a<=t;a++)
	{if(i1%a==0) break;}
	for(b=2;b<=p;b++)
	{if(i2%b==0) break;}
	if(a>t&&b>p)
	{printf("%d=%d+%d\n",s,i1,i2); 
	break;}
	}
	
	}


	return 0;
}

