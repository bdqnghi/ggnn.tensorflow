struct stu
{
   float num;
   float chi,mat,total;
   struct stu *next;
};
struct stu *creat(int n)
{
   int i;

   struct stu *head,*p1,*p2;
        for(i=0;i<n;i++)
   {
           p1=(struct stu*)malloc(sizeof(struct stu));
           scanf("%f %f %f",&p1->num,&p1->chi,&p1->mat);
           p1->total=p1->chi+p1->mat;
           if (i==0)
           {head=p2=p1;}
           else
           {p2->next=p1;p2=p1;}
   }
   p2->next=0;
   return(head);

}


void main()
{
        int n,i,j;
		float max;
        struct stu *head,*maxi,*p;
        scanf("%d",&n);
        head=creat(n);
       

        for(i=0;i<3;i++)
        {
            	p=head;maxi=head;
				max=head->total;
			for(j=0;j<n-1;j++)
			{
				p=p->next;
				if(p->total>max) 
				{max=p->total;maxi=p;}
			}
			
			printf("%g %g\n",maxi->num,maxi->total);
            maxi->total=0;
        }
}
