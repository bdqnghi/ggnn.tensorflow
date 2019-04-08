struct book
{ char name[20];
  int num;
  struct book *next;
};

  struct book *creat(int m)
  {
	  int i;
	  struct book *head,*p1,*p2;
	  p1=(struct book *)malloc(len);
	  scanf("%d",&p1->num);
	  scanf("%s",p1->name);
	  p1->next=null;
	  head=p1;
	  p2=p1;
	  for(i=1;i<m;i++)
	  {
		  p1=(struct book *)malloc(len);
		  scanf("%d",&p1->num);
	      scanf("%s",p1->name);
		  p1->next=null;
		  p2->next=p1;
		  p2=p1;
	  }
	  return(head);
  }

  void main()
  {

  struct book *p,*head;
  int i,a[26],m;
  char *q;
  scanf("%d",&m);
  head=creat(m);
  p=head;
  char s[30];
  for(i=0;i<26;i++)
  a[i]=0;
  while(p){
	  

	  i=0;
	   strcpy(s,p->name);
	   while(s[i]!='\0')
	   {
		   a[s[i]-'A']++;
           i++;
	   }
	  p=p->next;
  }
 /* for(i=0;i<26;i++)
  printf("%d",a[i]);*/
  //??
  
  int max=0,max_p;
   for(i=0;i<26;i++)
	  {
	   if(a[i]>max) {max=a[i];max_p=i+'A';}
   }
   printf("%c\n%d\n",max_p,max);
   //find max
   
   p=head;
   int x=0;
   char c[20];
   while(p){
	  
	  i=0;
	   strcpy(c,p->name);
	   while(c[i]!='\0')
	   {
		   
           if(c[i]==max_p) x=1;
		   i++;
	   }
	   if(x==1) printf("%d\n",p->num);
	   x=0;
	  p=p->next;
		  //if(strchr(p->name,max_p)) printf("%d\n",p->num);
	  }
   //??

  }
