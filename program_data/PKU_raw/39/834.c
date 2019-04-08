void main()
{struct xuesheng
{char x[21];
 int qimo;
 int banji;
 char ganbu;
 char xibu;
 int lunwen;
 int qian;
};
 struct xuesheng x[101],*p;
 int i,n,max=0,total=0,money;
 char name[21];
 scanf("%d",&n);
 for (i=0;i<n;i++)
 {scanf("%s %d %d %c %c %d\n",&x[i].x,&x[i].qimo,&x[i].banji,&x[i].ganbu,&x[i].xibu,&x[i].lunwen);
  x[i].qian=0;
  if (x[i].qimo>80&&x[i].lunwen!=0)
	  x[i].qian+=8000;
  if (x[i].qimo>85&&x[i].banji>80)
	  x[i].qian+=4000;
  if (x[i].qimo>90)
	  x[i].qian+=2000;
  if (x[i].qimo>85&&x[i].xibu=='Y')
	  x[i].qian+=1000;
  if (x[i].banji>80&&x[i].ganbu=='Y')
	  x[i].qian+=850;
  total=total+x[i].qian;
 }

 for (i=0;i<n;i++)
	 if(max<x[i].qian)
	 {strcpy(name,x[i].x);max=x[i].qian;}
 printf("%s\n%d\n%d",name,max,total);
}