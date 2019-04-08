int n,max1,xue1,max2,xue2,max3,xue3;
struct chengji
{
    int xh;
    int yw;
    int sx;
    int zf;
    struct chengji *next;
};

void create()
{
    struct chengji *head;
    struct chengji *p1;
    int i=0;    
    while(i<n)
    {   i++;
    	if (i==1) head=p1;
    	p1=(struct chengji *)malloc(len);
    	      scanf("%d %d %d",&p1->xh,&p1->yw,&p1->sx);
    	      p1->zf=p1->yw+p1->sx; 
    	      if ((p1->zf)>max1)
    	      {
    	           xue3=xue2;
    	           max3=max2;
    	           xue2=xue1;
    	           max2=max1;
    	           xue1=p1->xh;
    	           max1=p1->zf;
    	           
    	      }    	   
    	      else 
    	      {if ((p1->zf)>max2&&(p1->zf)<=max1)
    	      {
    	          xue3=xue2;
    	          max3=max2;
    	          xue2=p1->xh;
    	          max2=p1->zf;
    	      }
    	      else {if ((p1->zf)>max3&&(p1->zf)<=max2)
    	      {
    	          xue3=p1->xh;
    	          max3=p1->zf;
    	      }}}
       
        p1=p1->next;
    }
}

void main()
{
    scanf("%d",&n);
    max1=0,max2=0,max3=0;
    create();
    printf("%d %d\n",xue1,max1);
    printf("%d %d\n",xue2,max2);
    printf("%d %d",xue3,max3);
}