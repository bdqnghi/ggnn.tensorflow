int main()
{
	struct stu
	{
		char name[20];
        int a;
        int b;
        char c[2];
        char d[2];
        int e;
        int m;
	};
	struct stu *p;
    int n,i,max=0,t,sum=0;
    scanf("%d",&n);
    p=(struct stu *)malloc(n*sizeof(struct stu));
    for(i=0;i<n;i++)
    scanf("%s%d%d%s%s%d",(p+i)->name,&(p+i)->a,&(p+i)->b,(p+i)->c,(p+i)->d,&(p+i)->e);
    for(i=0;i<n;i++)
    (p+i)->m=0;
    for(i=0;i<n;i++)
	{
      if((((p+i)->a)>80)&&(((p+i)->e)>0))
        (p+i)->m+=8000;
      if((((p+i)->a)>85)&&(((p+i)->b)>80))
        (p+i)->m+=4000;
      if(((p+i)->a)>90)
         (p+i)->m+=2000;
      if((((p+i)->a)>85)&&(((p+i)->d[0])=='A'+24))
        (p+i)->m+=1000;
      if((((p+i)->b)>80)&&(((p+i)->c[0])=='A'+24))
        (p+i)->m+=850;
	}
	
  for(i=0;i<n;i++)

   if(((p+i)->m)>max)
    {
      max=(p+i)->m;
      t=i;
    }
    
  for(i=0;i<n;i++)
       sum+=(p+i)->m;
  printf("%s\n",(p+t)->name);
  printf("%d\n",max);
  printf("%d\n",sum);
  return 0;

}
