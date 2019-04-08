int main()
{
    int k,l,m,n;
	scanf("%d\n%d\n%d",&k,&l,&m);   //?????
    if(k%4==0)
	{if(k%100==0)
	{if(k%400==0)          //??
			{
if((l>0)&&(l<2)){n=m;printf("%d",n);}
else if((l>1)&&(l<3)){n=(m+31);printf("%d\n",n);}
else if((l>2)&&(l<4)){n=(m+31+29);printf("%d\n",n);}
else if((l>3)&&(l<5)){n=(m+31+29+31);printf("%d\n",n);}
else if((l>4)&&(l<6)){n=(m+31+29+31+30);printf("%d\n",n);}
else if((l>5)&&(l<7)){n=(m+31+29+31+30+31);printf("%d\n",n);}
else if((l>6)&&(l<8)){n=(m+31+29+31+30+31+30);printf("%d\n",n);}
else if((l>7)&&(l<9)){n=(m+31+29+31+30+31+30+31);printf("%d\n",n);}
else if((l>8)&&(l<10)){n=(m+31+29+31+30+31+30+31+31);printf("%d\n",n);}
else if((l>9)&&(l<11)){n=(m+31+29+31+30+31+30+31+31+30);printf("%d\n",n);}
else if((l>10)&&(l<12)){n=(m+31+29+31+30+31+30+31+31+30+31);printf("%d\n",n);}
else if((l>11)&&(l<13)){n=(m+31+29+31+30+31+30+31+31+30+31+30);printf("%d\n",n);}
			}
			else                  //?? 
			{
if((l>0)&&(l<2)){n=m;printf("%d",n);}
else if((l>1)&&(l<3)){n=(m+31);printf("%d\n",n);}
else if((l>2)&&(l<4)){n=(m+31+28);printf("%d\n",n);}
else if((l>3)&&(l<5)){n=(m+31+28+31);printf("%d\n",n);}
else if((l>4)&&(l<6)){n=(m+31+28+31+30);printf("%d\n",n);}
else if((l>5)&&(l<7)){n=(m+31+28+31+30+31);printf("%d\n",n);}
else if((l>6)&&(l<8)){n=(m+31+28+31+30+31+30);printf("%d\n",n);}
else if((l>7)&&(l<9)){n=(m+31+28+31+30+31+30+31);printf("%d\n",n);}
else if((l>8)&&(l<10)){n=(m+31+28+31+30+31+30+31+31);printf("%d\n",n);}
else if((l>9)&&(l<11)){n=(m+31+28+31+30+31+30+31+31+30);printf("%d\n",n);}
else if((l>10)&&(l<12)){n=(m+31+28+31+30+31+30+31+31+30+31);printf("%d\n",n);}
else if((l>11)&&(l<13)){n=(m+31+28+31+30+31+30+31+31+30+31+30);printf("%d\n",n);}
			}
	}else                  //??
			{
if((l>0)&&(l<2)){n=m;printf("%d",n);}
else if((l>1)&&(l<3)){n=(m+31);printf("%d\n",n);}
else if((l>2)&&(l<4)){n=(m+31+29);printf("%d\n",n);}
else if((l>3)&&(l<5)){n=(m+31+29+31);printf("%d\n",n);}
else if((l>4)&&(l<6)){n=(m+31+29+31+30);printf("%d\n",n);}
else if((l>5)&&(l<7)){n=(m+31+29+31+30+31);printf("%d\n",n);}
else if((l>6)&&(l<8)){n=(m+31+29+31+30+31+30);printf("%d\n",n);}
else if((l>7)&&(l<9)){n=(m+31+29+31+30+31+30+31);printf("%d\n",n);}
else if((l>8)&&(l<10)){n=(m+31+29+31+30+31+30+31+31);printf("%d\n",n);}
else if((l>9)&&(l<11)){n=(m+31+29+31+30+31+30+31+31+30);printf("%d\n",n);}
else if((l>10)&&(l<12)){n=(m+31+29+31+30+31+30+31+31+30+31);printf("%d\n",n);}
else if((l>11)&&(l<13)){n=(m+31+29+31+30+31+30+31+31+30+31+30);printf("%d\n",n);}
			}
	}else                  //??
			{
if((l>0)&&(l<2)){n=m;printf("%d",n);}
else if((l>1)&&(l<3)){n=(m+31);printf("%d\n",n);}
else if((l>2)&&(l<4)){n=(m+31+28);printf("%d\n",n);}
else if((l>3)&&(l<5)){n=(m+31+28+31);printf("%d\n",n);}
else if((l>4)&&(l<6)){n=(m+31+28+31+30);printf("%d\n",n);}
else if((l>5)&&(l<7)){n=(m+31+28+31+30+31);printf("%d\n",n);}
else if((l>6)&&(l<8)){n=(m+31+28+31+30+31+30);printf("%d\n",n);}
else if((l>7)&&(l<9)){n=(m+31+28+31+30+31+30+31);printf("%d\n",n);}
else if((l>8)&&(l<10)){n=(m+31+28+31+30+31+30+31+31);printf("%d\n",n);}
else if((l>9)&&(l<11)){n=(m+31+28+31+30+31+30+31+31+30);printf("%d\n",n);}
else if((l>10)&&(l<12)){n=(m+31+28+31+30+31+30+31+31+30+31);printf("%d\n",n);}
else if((l>11)&&(l<13)){n=(m+31+28+31+30+31+30+31+31+30+31+30);printf("%d\n",n);}
			}
    return 0;
}