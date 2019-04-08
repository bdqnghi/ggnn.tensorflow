int main()
{
       int number,ge,shi,bai,qian,wan,place;
	scanf("%d",&number);
	if(number>=10000)
		place=5;
	else
	{
		if (number>=1000)
			place=4;
		else 
		{
			if (number>=100)
		    place=3;
			else
			{
				if (number>=10)
			    place=2;
				else
				place=1;

			}
		}
	}
	ge=number%10;
	shi=((number-ge)%100)/10;
	bai=((number-ge-10*shi)%1000)/100;
	qian=((number-ge-10*shi-100*bai)%10000)/1000;
	wan=(number-ge-10*shi-100*bai-1000*qian)/10000;

	switch(place)
	{
     case 5:printf("%d%d%d%d%d",ge,shi,bai,qian,wan);break;
     case 4:printf("%d%d%d%d",ge,shi,bai,qian);break;
     case 3:printf("%d%d%d",ge,shi,bai);break;
     case 2:printf("%d%d",ge,shi);break;
     case 1:printf("%d",ge);
     }
     return 0;
}



     
