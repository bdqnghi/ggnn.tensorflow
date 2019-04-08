int an1[max+10];
int an2[max+10];
char sz1[max+10];
char sz2[max+10];

int main()
{
	
	int i,j=0,sum,x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0,x9=0,x10=0,x11=0,x12=0,x13=0;
	int	x14=0,x15=0,x16=0,x17=0,x18=0,x19=0,x20=0,x21=0,x22=0,x23=0,x24=0,x25=0,x26=0;
	int y1=0,y2=0,y3=0,y4=0,y5=0,y6=0,y7=0,y8=0,y9=0,y10=0,y11=0,y12=0,y13=0,y14=0,y15=0,y16=0,y17=0,y18=0,y19=0,y20=0;
	int y21=0,y22=0,y23=0,y24=0,y25=0,y26=0;
	
	scanf("%s",sz1);
	scanf("%s",sz2);
	
	int nlen1=strlen(sz1);
	int nlen2=strlen(sz2);
	
	for(i=nlen1-1;i>=0;i--)
	{
		an1[j++]=sz1[i];}
	for(i=nlen2-1;i>=0;i--)
	{
		an2[j++]=sz2[i];}
	for(i=0;i<=max;i++){
		if(an1[i]=='a')
			x1++;
		else if(an1[i]=='b')
			x2++;
		else if(an1[i]=='c')
			x3++;

		else if(an1[i]=='d')
			x4++;

		else if(an1[i]=='e')
			x5++;

		else if(an1[i]=='f')
			x6++;

		else if(an1[i]=='g')
			x7++;

		else if(an1[i]=='h')
			x8++;

		else if(an1[i]=='i')
			x9++;
		else if(an1[i]=='j')
			x10++;
		else if(an1[i]=='k')
			x11++;
		else if(an1[i]=='l')
			x12++;

		else if(an1[i]=='m')
			x13++;
		else if(an1[i]=='n')

			x14++;
		else if(an1[i]=='o')
			x15++;
		else if(an1[i]=='p')
			x16++;

		else if(an1[i]=='q')
			x17++;

		else if(an1[i]=='r')
			x18++;

		else if(an1[i]=='s')
			x19++;

		else if(an1[i]=='t')
			x20++;

		else if(an1[i]=='u')
			x21++;

		else if(an1[i]=='v')
			x22++;
		else if(an1[i]=='w')
			x23++;

		else if(an1[i]=='x')
			x24++;

		else if(an1[i]=='y')
			x25++;
		else if(an1[i]=='z')
			x26++;
	}
	for(i=0;i<=max;i++){
		if(an2[i]=='a')
			y1++;
		else if(an2[i]=='b')
			y2++;
		else if(an2[i]=='c')
			y3++;

		else if(an2[i]=='d')
			y4++;

		else if(an2[i]=='e')
			y5++;

		else if(an2[i]=='f')
			y6++;

		else if(an2[i]=='g')
			x7++;

		else if(an2[i]=='h')
			y8++;

		else if(an2[i]=='i')
			y9++;
		else if(an2[i]=='j')
			y10++;
		else if(an2[i]=='k')
			y11++;
		else if(an2[i]=='l')
			y12++;

		else if(an2[i]=='m')
			y13++;
		else if(an2[i]=='n')

			y14++;
		else if(an2[i]=='o')
			y15++;
		else if(an2[i]=='p')
			y16++;

		else if(an2[i]=='q')
			y17++;

		else if(an2[i]=='r')
			y18++;

		else if(an2[i]=='s')
			y19++;

		else if(an2[i]=='t')
			y20++;

		else if(an2[i]=='u')
			y21++;

		else if(an2[i]=='v')
			y22++;
		else if(an2[i]=='w')
			y23++;

		else if(an2[i]=='x')
			y24++;

		else if(an2[i]=='y')
			y25++;
		else if(an2[i]=='z')
			y26++;
	}

if(x1==y1 &&x2==y2 &&x3==y3 &&x4==y4 &&x5==y5 &&x6==y6 &&x7==y7 &&x8==y8 &&x9==y9 &&x10==y10 &&x11==y11 &&x12==y12 &&x13==y13 &&x14==y14 &&x15==y15 &&x16==y16 &&x17==y17 &&x18==y18 &&x19==y19 &&x20==y20 &&x21==y21 &&x22==y22 &&x23==y23 &&x24==y24 &&x25==y25 &&x26==y26)
printf("YES");
else
printf("NO");





}