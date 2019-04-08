
int main()
{
	int a, b, c, d[12], sum=0;
	int i;
    scanf("%d%d%d", &a, &b, &c);
	for(i=1; i<b; i++)
	{
        if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
		{
		    d[i]=31;
		}
	    else if(i==4 || i==6 || i==9 || i==11)
		{
	    	d[i]=30;
		}
	    else
		{
		    if(a%4==0 && a%100 != 0 || a%400==0)
			{
			d[2]=29;
			}
			else 
			{
				d[2]=28;
			}
		}
		sum+=d[i];
	}
	printf("%d\n", sum+c);
	return 0;
}

