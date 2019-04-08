int main()
{
int syear,smonth,sday,eyear,emonth,eday;
scanf("%d %d %d\n%d %d %d",&syear,&smonth,&sday,&eyear,&emonth,&eday);
int y,s1,leapy,s2=0,s3=0,s;
s1=365*(eyear-syear);
for(y=syear,leapy=0;y<eyear;y++){
   if((y%4==0&&y%100!=0)||(y%400==0)){
	   leapy=leapy+1;
   }
}
s1=s1+leapy;
if (smonth==1) s2=0;
else if (smonth==2) s2=31;
else if (smonth==3) s2=59;
else if (smonth==4) s2=90;
else if (smonth==5) s2=120;
else if (smonth==6) s2=151;
else if (smonth==7) s2=181;
else if (smonth==8) s2=212;
else if (smonth==9) s2=243;
else if (smonth==10) s2=273;
else if (smonth==11) s2=304;
else  {
	s2=334;
}
	s2=s2+sday;
if (emonth==1) s3=0;
else if (emonth==2) s3=31;
else if (emonth==3) s3=59;
else if (emonth==4) s3=90;
else if (emonth==5) s3=120;
else if (emonth==6) s3=151;
else if (emonth==7) s3=181;
else if (emonth==8) s3=212;
else if (emonth==9) s3=243;
else if (emonth==10) s3=273;
else if (emonth==11) s3=304;
else  {
	s3=334;
}
s3=s3+eday;
	if(((syear%4==0&&syear%100!=0)||(syear%400==0))&&(smonth>2)){
		s2=s2+1;
	}
	if(((eyear%4==0&&eyear%100!=0)||(eyear%400==0))&&(emonth>2)){
		s3=s3+1;
	}
s=s1+s3-s2;
printf("%d\n",s);
return 0;
}

