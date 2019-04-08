main()
{
   int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31},m,w,d=13,i,b;
   
  
   scanf("%d",&w);
    b=w;
   for(m=1;m<13;m++)
     {
     	w=b;
     {for(i=1;i<m;i++)
       {w+=days[i];} w+=12;}
	   if(w%7==5) printf("%d\n",m);}
}