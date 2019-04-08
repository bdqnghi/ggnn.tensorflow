
int ren(int x)
{
    if((x%400)==0||((x%100)!=0&&(x%4)==0))
		return 1;
	else
		return 0;
}

int dijitian(int year,int mon,int day)
{
    int i,d=0;
    if(ren(year))
	{
	    for(i=1;i<mon;i++)
		{
	        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			    d+=31;
		    else if(i==4||i==6||i==9||i==11)
			    d+=30;
		    else
			    d+=29;
		}
	}
	else
	{
	    for(i=1;i<mon;i++)
		{
	        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			    d+=31;
		    else if(i==4||i==6||i==9||i==11)
			    d+=30;
		    else
			    d+=28;
		}
	}
	d+=day;

	return d;
}

int main()
{
    int n,i,j,x[210][3]={0},a,b;

	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
	    scanf("%d%d%d",&x[i][0],&x[i][1],&x[i][2]);
	}

	for(i=0;i<n;i++)
	{
	    a=dijitian(x[i][0],x[i][1],1);
		b=dijitian(x[i][0],x[i][2],1);
		if(a>b)
		{
		    if((a-b)%7==0)
				printf("YES\n");
			else
            	printf("NO\n");
		}
		else
		{
		    if((b-a)%7==0)
				printf("YES\n");
			else
            	printf("NO\n");
		}
	}
	return 0;
}

