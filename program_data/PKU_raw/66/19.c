
int main(int argc, char* argv[])
{

  long n=0;
  long  x,y,z,i,l,v;
  int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};

  
  scanf("%d %d %d",&x,&y,&z);
  
  {if(x%400==0)
    v=400;
	  else
		  v=x%400;}

  for(i=1;i<y;i++)
  {n+=d[i-1];}
  n=n+z;
  n=n+(v-1)*365;
  for(i=3;i<v;i++){
	  if((i%4==0&&i%100!=0)||(i%400==0))
		  n=n+1;
      else n=n;}
   if(((v%4==0&&v%100!=0)||v%400==0)&&(y>2))
	   n=n+1;
    else n=n;
   l=n%7;
   switch(l) {
    case 1:
	   printf("Mon.");break;
    case 2:
	   printf("Tue.");break;
    case 3:
	   printf("Wed.");break;
   	case 4:
	   printf("Thu.");break;  
	case 5:
	   printf("Fri.");break;  
	case 6:
	   printf("Sat.");break;   
	case 0:
	   printf("Sun.");break; }
	   return 0;
}


