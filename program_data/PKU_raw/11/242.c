void main()
{
	int b[5],c[5],k[5];
	long a[5];
	int j;
	for (j=1;j<=5;j++)
	{
		scanf("%ld %d %d",&a[j-1],&b[j-1],&c[j-1]);
	}
	for (j=1;j<=5;j++)
	{
		int i,l,x;
	    if(a[j-1]%4!=0) l=28;
	    else
		{
		    if((a[j-1]%100==0)&&(a[j-1]%400!=0)) l=28;
		    else l=29;
		}
		x=0;
	    for(i=1;i<=b[j-1]-1;i++)
		{
		    switch(i)
			{
		    case 1:x=x+31;break;
		    case 2:x=x+l;break;
		    case 3:x=x+31;break;
		    case 4:x=x+30;break;
		    case 5:x=x+31;break;
			case 6:x=x+30;break;
			case 7:x=x+31;break;
			case 8:x=x+31;break;
			case 9:x=x+30;break;
			case 10:x=x+31;break;
			case 11:x=x+30;break;
			case 12:x=x+31;break;
			}
		}
	    x=x+c[j-1];
	    int m;
	    m=j-1;
	    k[m]=x;
	    printf("%d\n",k[m]);
	}
}

