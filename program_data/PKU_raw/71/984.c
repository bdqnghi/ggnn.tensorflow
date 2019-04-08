int main(int argc, char* argv[])
{
    int y,m1,m2,i,n,j,k,d1,d2;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%d%d%d",&y,&m2,&m1);
		if ((y%4==0)&&(y%100!=0)||(y%400==0))
		{
		   if ((m1==1&&m2==4)||(m1==4&&m2==1))
			   printf ("YES\n");
		   else if ((m1==1&&m2==7)||(m1==7&&m2==1))
			   printf ("YES\n");
		   else if ((m1==7&&m2==4)||(m1==4&&m2==7))
			   printf ("YES\n");
		   else if ((m1==2&&m2==8)||(m1==8&&m2==2))
			   printf ("YES\n");
		   else if ((m1==3&&m2==11)||(m1==11&&m2==3))
			   printf ("YES\n");
		   else if ((m1==9&&m2==12)||(m1==12&&m2==9))
			   printf ("YES\n");

		   else
			   printf("NO\n");
		}
		else 
		{
			if ((m1==1&&m2==10)||(m1==10&&m2==1))
			   printf ("YES\n");
			else if ((m1==3&&m2==11)||(m1==11&&m2==3))
			   printf ("YES\n");
			else if ((m1==2&&m2==11)||(m1==11&&m2==2))
			   printf ("YES\n");
			else if ((m1==3&&m2==2)||(m1==2&&m2==3))
			   printf ("YES\n");
			else if ((m1==4&&m2==7)||(m1==7&&m2==4))
			   printf ("YES\n");
			else if ((m1==9&&m2==12)||(m1==12&&m2==9))
			   printf ("YES\n");
			else printf ("NO\n");

		}

	}
	return 0;
}
