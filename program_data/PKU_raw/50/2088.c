int main()
{
	int a,b;

scanf("%d",&b);

for(a=1;a<=12;a++)
{  

	if(a==1)
	{   
		if((b+5)%7!=0){
		b=(b+5)%7;
		}else
		{b=7;}
		if(b==5)
		{printf("%d\n",a);}
		
	}else if(a==3)
	{
			if((b+7)%7!=0){
		b=(b+7)%7;
		}else
			{b=7;}
			if(b==5)
		{printf("%d\n",a);}
	}else if(a==2||a==4||a==6||a==8||a==9||a==11)
	{	if((b+3)%7!=0){
		b=(b+3)%7;
		}else
	{b=7;}
		if(b==5)
		{printf("%d\n",a);}
	}
	else if(a==5||a==7||a==10||a==12)
	{  if((b+2)%7!=0)
	{
		b=(b+2)%7;
		}else
	{b=7;}
		if(b==5)
		{printf("%d\n",a);}
	}

}

return 0;
}