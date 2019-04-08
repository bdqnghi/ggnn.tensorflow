struct N{
 char w[50];
 int n;
 struct N *next;
};
int main(){
 struct N *p,*q,*head;
 int n,d,i;
 scanf("%d",&n);
 for(i=1;i<=n;i++){                               
	 p=(struct N*)malloc(sizeof(struct N));
	 if(i==1){
	     head=p;
	     q=p;
	 }
	 else{
		 if(i!=n){
		  q->next=p;
		  q=p;
		 }
		 else{
		  q->next=p;
		  p->next=NULL;
		 }
	}}
 p=head;
 for(i=1;i<=n;i++){
  scanf("%s",p->w);
  p->n=(strlen(p->w)+1);
  p=p->next;
 }
 d=-1;
 p=head;
 for(i=1;i<=n;){
	 if(d==(-1))
	 { printf("%s",p->w);
	    i++;
	   d=d+(p->n);
	   p=p->next;}
	 if((d+(p->n))<=80&&d!=(-1)){
	  printf(" %s",p->w);
	  i++;
	  d=d+(p->n);
	  p=p->next;if(p==NULL){break;}
	 }
	 if((d+(p->n))>80){
	  printf("\n");
	  d=-1;
	 }
 }
 return 0;
} 