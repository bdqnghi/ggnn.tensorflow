
int trans(int a[5][5],int n,int m)
{int *pi,*pj,i,c;

 if(n<=4&&n>=0&&m<=4&&n>=0) 
 {
  pi=*(a+n);
  pj=*(a+m);
  for(i=0;i<5;i++)
  {c=*pi;
  *pi=*pj;
  *pj=c;
  pi++;
  pj++;
  }
  return 1;
 }
else return 0;
}
   

main()
{
 int a[5][5],n,m,*p;
 p=*a;
 for(n=0;n<5;n++) 
	 for(m=0;m<5;m++)
	 {scanf("%d",p);
	  p++;
	 }
p=*a;
scanf("%d %d",&n,&m);
	 if(trans(a,n,m))
	 {  
	    for(n=0;n<5;n++)
		{
         for(m=0;m<4;m++)
		 {printf("%d ",*p);p++;}
		 printf("%d\n",*p);p++;
		 
		}
	    
	 }
	 else printf("error\n");
}