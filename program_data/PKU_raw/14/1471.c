main()
{ int n,i;
   struct h
   {
  int mun;
  int chinese;
  int math;
  struct h *p;
   } ;
struct h *a,*b,*lily; 
scanf("%d",&n);
a=len;
lily=a;
for(i=0;i<n;i++)
{  scanf("%d %d %d",&a->mun,&a->chinese,&a->math);
   b=len;
   a->p=b;
   a=b;
}
b=NULL;
a=lily;
int a1=0,a2=0,a3=0,b1=0,b2=0,b3=0,c;
for(i=0;i<n;i++)
{   c=(a->chinese+a->math);
	if(c>a1){b3=b2;b2=b1;b1=a->mun;a3=a2;a2=a1;a1=c;}
	else if(c>a2){b3=b2;b2=a->mun;a3=a2;a2=c;}
	else if(c>a3){b3=a->mun;a3=c;}
	a=a->p;
}
printf("%d %d\n",b1,a1);
printf("%d %d\n",b2,a2);
printf("%d %d\n",b3,a3);
}