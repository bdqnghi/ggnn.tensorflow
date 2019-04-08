
 typedef struct linknode
 {
       char inf[500];
	   struct linknode *next,*prev;
 } snode,*ptr;

 main ()
 {
     int i,a1,a2,j,min,k; 
	 ptr head,p1,p2,p3;
	  
	 k=0;
     for (i=1;i<=5;i)
	 {
         p1=(ptr)malloc(sizeof(snode));
		 if (k==0) {head=p1; p2=p1;}
		 else {(*p2).next =p1; (*p1).prev=p2;}
         
	     gets((*p1).inf);
		 if ((*p1).inf[0]!='e') 
		 {
			 p2=p1; k++;
		 }
		 else
		 {
		     p1=p2; i=6; 
		 }
	 }

	 

	 for (i=1;i<=k;i++)
	 {
	     printf ("%s\n",(*p1).inf  );
		 if (i!=k) p1=(*p1).prev ;

	 }
	 
 }
