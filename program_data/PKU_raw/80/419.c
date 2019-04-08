void wc(int a1,int b1,int c1,int a2,int b2,int c2,int sum)
{
	if(a1==a2&&b1==b2&&c1==c2){cout<<sum;}
	else
	{
	    if((b1==1||b1==3||b1==5||b1==7||b1==8||b1==10)&&c1==31){wc(a1,b1+1,1,a2,b2,c2,sum+1);}
	    else if(b1==12&&c1==31){wc(a1+1,1,1,a2,b2,c2,sum+1);}
	    else if((b1==4||b1==6||b1==9||b1==11)&&c1==30){wc(a1,b1+1,1,a2,b2,c2,sum+1);}
	    else if(((a1%4==0&&a1%100!=0)||(a1%400==0))&&b1==2&&c1==29){wc(a1,b1+1,1,a2,b2,c2,sum+1);}
	    else if((!((a1% 4 == 0 && a1 % 100 != 0) || (a1% 400 == 0)))&&b1==2&&c1==28){wc(a1,b1+1,1,a2,b2,c2,sum+1);}
	    else {wc(a1,b1,c1+1,a2,b2,c2,sum+1);}
	}
}
int main()
{
	int a1=0,b1=0,c1=0,a2=0,b2=0,c2=0;
	cin>>a1>>b1>>c1;
	cin>>a2>>b2>>c2;
	wc(a1,b1,c1,a2,b2,c2,0);
	return 0;
}
