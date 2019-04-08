int main()
{
  int a,b,c,d,e,f;
  int i,time=0;
  for(i=0;i<10000;i++){
     scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
     time=time+(d+12-a)*60*60;
	 time=time+(e-b)*60;
	 time=time+f-c;
	 
	 if(time==12*60*60){
	 break;
	 }
	 if(time!=0){
	 printf("%d\n",time);
	 time=0;
	 }
  }
    return 0;
}