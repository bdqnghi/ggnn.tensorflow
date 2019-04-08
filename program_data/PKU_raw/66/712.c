int main(){
  int nian,yue,ri,t,tt,a;
   scanf("%d%d%d",&nian,&yue,&ri);
   tt=(nian-1)*(365%7)+(nian-1)/4-(nian-1)/100+(nian-1)/400;
   if(nian%4==0||(nian%400==0&&nian%100!=0)){
       t=29;}
     else
       {t=28;}  
    switch(yue){
    case 1:a=ri;
		break;
    case 2:a=31+ri;
		break;
    case 3:a=31+t+ri;
		break;
    case 4:a=31*2+t+ri;
		break;
    case 5:a=31*2+30+t+ri;
		break;
    case 6:a=31*3+30+t+ri;
		break;
    case 7:a=31*3+30*2+t+ri;
		break;
case 8:a=31*4+30*2+t+ri;
	break;
case 9:a=31*5+30*2+t+ri;
	break;
case 10:a=31*5+30*3+t+ri;
	break;
case 11:a=31*6+30*3+t+ri;
	break;
default:a=31*6+30*4+t+ri;}

 
switch((a+tt)%7){
case 0:printf("sun.");
	break;
case 1:printf("Mon.");
	break;
case 2:printf("Tue.");
	break;
case 3:printf("Wed.");
	break;
case 4:printf("Thu.");
	break;
case 5:printf("Fri.");
	break;
default:printf("Sat.");}
return 0;

}
