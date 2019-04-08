int main()
{
	int i,j,k,t,w,ye,da,mo,re;
	scanf("%d %d %d",&ye,&mo,&da);
	ye=ye%2800;
	k=ye/400;
	j=ye%400;
	if(mo==1||mo==2)
	{
		mo=mo+12;
		ye=ye-1;
	}
	w = (da+1 + 2*mo + 3*(mo+1)/5 + ye + ye/4 - ye/100 + ye/400)%7;

 switch(w)
 {
 case 0: 
  printf("Sun.\n");
  break;
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
 }
return 0;	
}