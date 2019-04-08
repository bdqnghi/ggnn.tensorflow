struct stu
{char num[9];
 char nam[50];
 char s;
 int old;
 double sco;
 char add[18];
 struct stu *next;
 struct stu *abv;
};
void main()
{struct stu*head,*p1,*p2;
 int i=0;
 head=NULL;
 do
 {p1=(struct stu*)malloc(LEN);
  scanf("%s",&p1->num);if(!strcmp(p1->num,"end"))break;
  scanf("%s %c %d %lf %s",&p1->nam,&p1->s,&p1->old,&p1->sco,&p1->add);
  if(i==0){head=p1;p1->abv=NULL;}
  else {p1->abv=p2;}
  p2=p1;
  i++;
 }while(1);
 p1=p2;
 do
 {if(p1->sco-(int)p1->sco==0)
  printf("%s %s %c %d %.0lf %s\n",p1->num,p1->nam,p1->s,p1->old,p1->sco,p1->add);
  else
  printf("%s %s %c %d %.1lf %s\n",p1->num,p1->nam,p1->s,p1->old,p1->sco,p1->add);
  p1=p1->abv;
 }while(p1!=NULL);
}
