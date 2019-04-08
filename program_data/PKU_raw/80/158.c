int main()
{
	int sY,sM,sD,eY,eM,eD,d1,i,d2,j,d3,k,d;
	scanf("%d%d%d\n",&sY,&sM,&sD);
	scanf("%d%d%d",&eY,&eM,&eD);
	d1=(sM-1)*31+sD;
	sM=sM-1;
	for(i=0;sM>=1;sM=sM-1)
	{
		if(sM==4||sM==6||sM==9||sM==11)
		{
			i=i+1;
		}
		else if(sM==2)
		{
			if((sY%4==0&&sY%100!=0)||(sY%400==0))
			{
				i=i+2;
			}
			else 
			{
				i=i+3;
			}
		}
	}
	d1=d1-i;
	d2=(13-eM)*31-eD;
	for(j=0;eM<=12;eM=eM+1)
	{
        if(eM==4||eM==6||eM==9||eM==11)
		{
			j++;
		}
	
		else if(eM==2)
		{
			if((eY%4==0&&eY%100!=0)||(eY%400==0))
			{
				j=j+2;
			}
			else 
			{
				j=j+3;
			}
		}
	}
	d2=d2-j;
    d3=(eY-sY+1)*365;
	for(k=0;sY<=eY;sY=sY+1)
		{
			if((sY%4==0&&sY%100!=0)||(sY%400==0))
				k++;
		}
	d3=d3+k;
	d=d3-d1-d2;
	printf("%d",d);
}
	
	
