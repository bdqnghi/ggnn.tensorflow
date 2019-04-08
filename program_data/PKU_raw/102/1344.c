
main()
{
 struct student
 {
  char sex[6];
  float height;      
 }stu[40];
 int n, bnum=0, gnum=0;
 int i, j;
 float temp;
 float boy[40], girl[40];
 scanf("%d", &n);
 for (i=0; i<n; i++)
 {
  scanf("%s", stu[i].sex);
  scanf("%f", &stu[i].height);    
  if (strcmp(stu[i].sex, "female")>0)
  {
   boy[i-gnum]=stu[i].height;
   bnum++;                      
  }
  else 
  {
   girl[i-bnum]=stu[i].height;
   gnum++;    
  }
 }
 
 for (i=0; i<bnum; i++)
 {
  for (j=bnum-1; j>i; j--)
  {
   if (boy[j]<boy[j-1])
   {
    temp=boy[j-1];
    boy[j-1]=boy[j];
    boy[j]=temp;                   
   }   
  }    
 }
 
 for (i=0; i<gnum; i++)
 {
  for (j=gnum-1; j>i; j--)
  {
   if (girl[j]>girl[j-1])
   {
    temp=girl[j-1];
    girl[j-1]=girl[j];
    girl[j]=temp;                   
   }   
  }    
 }
  
 for (i=0; i<bnum; i++)
     printf("%.2f ", boy[i]);
 for (i=0; i<gnum-1; i++)
     printf("%.2f ", girl[i]);
 printf("%.2f", girl[gnum-1]);
 
 }
