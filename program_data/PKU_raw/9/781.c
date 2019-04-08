  void main()
 {int n;
  scanf ("%d",&n);
  struct patient
   { int num[10];int age;}
   patient[100];
  struct a
   { int num[10];int age;}
   a[100];
  int i,j=0;int t=0;
  for (i=0;i<n;i++)
  scanf ("%s %d",patient[i].num,&patient[i].age);
   for (i=0;i<n;i++)
     { if (patient[i].age>=60) {strcpy(a[j].num,patient[i].num);
     a[j].age=patient[i].age;j++;}}
   int k=j; int m=a[0].age;
  i=0;
  while (i<k) 
  {
   {for (j=0;j<k;j++)
   if (m<a[j].age) {m=a[j].age; t=j;}}
    printf("%s\n",a[t].num);a[t].age=0;m=0;i++;}
  for (i=0;i<n;i++)
  {if(patient[i].age<60) printf("%s\n",patient[i].num);}
 }