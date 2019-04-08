
 typedef struct linknode
 {
       int inf;
	   struct linknode *next,*prev;
 } snode,*ptr;

 main ()
 {
     int i,j,l,k,n,syn; 
	 ptr head,p1,p2,p3;
	  
	 k=0;
	 scanf ("%d",&n);
     for (i=1;i<=n;i++)
	 {
         
		 scanf ("%d",&l);  syn=0; 
		 
		 if (i!=1)
		 {
		   p2=head;
		   for (j=1;j<=k;j++)
		   {
			   if (l==(*p2).inf ) {syn=1; }
			 if (j!=k) p2=((*p2).next ) ;
		   }
		 }
		 
		 if (syn==0)
		 {
		    p1=(ptr)malloc(sizeof(snode));
			(*p1).inf =l; 
		    if (k==0) {head=p1; p2=p1;}
			
	     	 else {(*p2).next =p1;}
            k++;
		 }
	
	 }	 

	 p1=head;


	 for (i=1;i<=k;i++)
	 {

		 printf ("%d",(*p1).inf  );
		 if (i!=k) {p1=(*p1).next ; printf (",");}

	 }
	 printf ("\n");
	 
 }
