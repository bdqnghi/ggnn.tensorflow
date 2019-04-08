
void main()
{   
	typedef struct {
     int data;
	 int next;
	}Link;

   Link a[Max];
   int n,m;
   int i;
   int p;
   
 while(1){
   scanf("%d%d",&n,&m);
   if(n==0||m==0)
	   exit(0);
   for(i=0;i<=n;i++)
	   a[i].data=i,a[i].next=i+1;
   a[n].next=1;
   a[0].data=n;
   p=n;
   while(a[0].data>1)
   {  
	  
      for(i=1;i<m;i++)
		  p=a[p].next;
      a[p].next=a[a[p].next].next;
	  a[0].data--;
      
   }
   
   printf("%d\n",a[p].data);
 }
	
}