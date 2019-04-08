int main()
{
	int n,i,sc,xuefen[10],S=0;
    float s=0,gpa,average;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&xuefen[i]);
		S=S+xuefen[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&sc);
	
		    if(sc<=100&&sc>=90)
			gpa=4.0;
			else if(sc<=89&&sc>=85)
			gpa=3.7;
			else if(sc<=84&&sc>=82)
			gpa=3.3;
			else if(sc>=78&&sc<=81)
             gpa=3.0;
			else if(sc>=75&&sc<=77)
            gpa=2.7;
			else if(sc>=72&&sc<=74)
            gpa=2.3;
            else if(sc>=68&&sc<=71)
            gpa=2.0;
                else if(sc>=64&&sc<=67)
           gpa=1.5;
            else if(sc>=60&&sc<=63)
           gpa=1.0;
               else if(sc<60)
            gpa=0.0;
			   s=s+xuefen[i]*gpa;
	}
	average=s/S;
	printf("%.2f",average);
}


