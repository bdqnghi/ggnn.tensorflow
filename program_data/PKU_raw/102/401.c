int compmale(const void*a1,const void*a2)
{
 	float*p1,*p2;
 	p1=(float*)a1;
    p2=(float*)a2;
    if((*p1)-(*p2)>=0)
   return 1;
   else
   return -1;
}
int compfemale(const void*a1,const void*a2)
{
 	float*p1,*p2;
 	p1=(float*)a1;
    p2=(float*)a2;
   if((*p2)-(*p1)>=0)
   return 1;
   else
   return -1;
}
struct person
{
 	   char sex[10];
 	   float h;
}mate[40];
main()
{
 	  float m[40],f[40];
	   int n,i,j,a=0,b=0;
	   scanf("%d",&n);
	   
	   for(i=0;i<n;i++)
	   {
	   		scanf("%s %f",mate[i].sex,&mate[i].h);
			if(strcmp(mate[i].sex,"male")==0)
			{
			 	m[a]=mate[i].h;
				 a++;							   		   
		    }
			else if(strcmp(mate[i].sex,"female")==0)
			{
	 	        f[b]=mate[i].h;
				 b++;
		    }
       }
	   qsort(m,a,sizeof(float),compmale);
	   for(i=0;i<a;i++)
	   printf("%1.2f ",m[i]);
	   qsort(f,b,sizeof(float),compfemale);
	   for(i=0;i<b;i++)
	   {
	   	if(i<b-1)			   
	      printf("%1.2f ",f[i]);
	    else
		  printf("%1.2f",f[i]);
	  }
		  getchar();getchar();
} 
