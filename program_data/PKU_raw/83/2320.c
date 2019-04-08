void main()
{
   int i,n,xft=0;
   int xf[10],score[10];
   float GPA=0,jd[10];
   scanf("%d",&n);
   for(i=0;i<=n-1;i++)
   {
	   scanf("%d",&xf[i]);
	   xft=xft+xf[i];
   }
   for(i=0;i<=n-1;i++)
   {
	   scanf("%d",&score[i]);
	   if(score[i]>=90) jd[i]=4.0;
	   else if(score[i]>=85) jd[i]=3.7;
	   else if(score[i]>=82) jd[i]=3.3;
	   else if(score[i]>=78) jd[i]=3.0;
	   else if(score[i]>=75) jd[i]=2.7;
	   else if(score[i]>=72) jd[i]=2.3;
	   else if(score[i]>=68) jd[i]=2.0;
	   else if(score[i]>=64) jd[i]=1.5;
	   else if(score[i]>=60) jd[i]=1.0;
	   else if(score[i]>=0) jd[i]=0;
   }
   for(i=0;i<=n-1;i++)
   {
	   GPA=GPA+xf[i]*jd[i];
   }
   GPA=GPA/xft;
   printf("%.2f",GPA);
}