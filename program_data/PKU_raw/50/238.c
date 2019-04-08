void main()
{
   int w,i;
   struct time
     {int month;
      int xingq;
      int n;
      };
    struct time a[12];
   for(i=0;i<12;i++)
     a[i].month=i+1;
     a[0].n=13;a[1].n=44;a[2].n=72;a[3].n=103;a[4].n=133;a[5].n=164;a[6].n=194;
     a[7].n=225;a[8].n=256;a[9].n=286;a[10].n=317;a[11].n=347;
  scanf("%d",&w);
  for(i=0;i<12;i++)
  {a[i].xingq=a[i].n%7;
  if(a[i].xingq==0)
	  a[i].xingq=7;
  a[i].xingq=(a[i].xingq+w-1)%7;}
  for(i=0;i<12;i++)
  {if(a[i].xingq==5)
  printf("%d\n",a[i].month);}
}
  
   
   
