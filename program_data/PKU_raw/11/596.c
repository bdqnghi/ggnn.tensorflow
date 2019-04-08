int main(int argc, char *argv[])
{
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int a,b,c,x=0,sum,i;
	scanf("%d %d %d",&a,&b,&c);
	for(i=0;i<12;i++)
	{       if(i+1==b)
			  break;
	  		  x=x+days[i];
		  
	}
    sum=x+c;
	if((a%4==0&&a%100!=0)||a%400==0)
	{ 
		if(b<=2)
		{
		printf("%d",sum);
		}
		if(b>2)
		{
	       sum=sum+1;
	    printf("%d",sum);
		}
		
	}
	else
       printf("%d",sum);
	return 0;
}

