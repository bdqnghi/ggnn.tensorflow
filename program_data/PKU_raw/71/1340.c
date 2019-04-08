
int main(int argc, char* argv[])
{
	int i,j,n,k,t1=0,t2=0;
	struct p{
		int year;
		int month1;
		int month2;
	}p[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&p[i].year,&p[i].month1,&p[i].month2);
	for(i=0;i<n;i++)
	{t1=0,t2=0;
		for(j=0;j<p[i].month1;j++)
		{
			if((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12))
				t1+=31;
			else if((j==4)||(j==6)||(j==9)||(j==11))
				t1+=30;
			else if(j==2)
			{
				if(p[i].year%400 == 0 ||(p[i].year%4==0 &&p[i].year%100!=0))
					t1+=29;
				else
					t1+=28;
			}
		}
		for(k=0;k<p[i].month2;k++)
		{
			if((k==1)||(k==3)||(k==5)||(k==7)||(k==8)||(k==10)||(k==12))
				t2+=31;
			else if((k==4)||(k==6)||(k==9)||(k==11))
				t2+=30;
			else if(k==2)
			{
				if(p[i].year%400 == 0 ||(p[i].year%4==0 &&p[i].year%100!=0))
					t2+=29;
				else
					t2+=28;
			}
		}
		if(((t2-t1)%7==0)||((t1-t2)%7==0))
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}


