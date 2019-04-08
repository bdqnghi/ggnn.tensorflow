int main()
{
int a,b,c,q,w,p,e,r,t,y;
scanf("%d %d %d",&a,&b,&c);
q=((a-1)/4-(a-1)/100+(a-1)/400)+(a-1)*1;
switch(b){
  case 1: 
           w=0;
           break;
  case 2: 
           w=31;
           break;
  case 3: 
           w=31+28;
           break;
  case 4: 
           w=31+28+31;
           break;
  case 5: 
           w=31+28+31+30;
           break;
  case 6: 
           w=28+31*3+30;
           break;
  case 7: 
           w=28+31*3+30*2;
           break;
  case 8: 
           w=28+31*4+30*2;
           break;
  case 9: 
           w=28+31*5+30*2;
           break;
  case 10: 
           w=28+31*5+30*3;
           break;
  case 11: 
           w=28+31*6+30*3;
           break;
  case 12: 
           w=28+31*6+30*4;
           break;
      }
r=a%4;
y=(a+100)%100;
t=(a+400)%400;
if(r==0){
   if(y!=0){
      if (b>2) w=w+1;      
            }
   else if(t==0){
            if (b>2)   w=w+1;
                }
         }
           e=q+w+c;
           p=e%7;

	switch(p){
	case 1:
		printf("Mon.\n");
		break;
	case 2:
		printf("Tue.\n");
		break;
	case 3:
		printf("Wed.\n");
		break;
	case 4:
		printf("Thu.\n");
		break;
	case 5:
		printf("Fri.\n");
		break;
	case 6:
		printf("Sat.\n");
		break;
	case 0:
		printf("Sun.\n");
		break;
           }
return 0;
}



