void date(int *year,int *month ,int *day)
{
  if(*month==1||*month==3||*month==5||*month==7||*month==8||*month==10||*month==12)
     {
          (*day)++;
          if(*day>31) {*day=1;(*month)++;}
          if(*month>12) {*month=1;(*year)++;} 
     }
  else if(*month==4||*month==6||*month==9||*month==11)
    {
         (*day)++;
         if(*day>30){*day=1;(*month)++;}
    }
  else if((*year % 4 == 0 && *year % 100 != 0) || (*year % 400 == 0))
    {
         (*day)++;
		 if(*day>29){*day=1;(*month)++;}
    }
  else 
   {
        (*day)++;
		if(*day>28){*day=1;(*month)++;}
   }
}
void main()
{ 
	int a,b,c, x,y,z;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
	int i=0;
	for(i=0;a!=x||b!=y||c!=z;date(&a,&b,&c),i++);
    printf("%d",i);
	
	/*int a=2008,b=4 ,c=1;
	date(&a,&b,&c);
	printf("%d %d %d",a,b,c);*/
}