struct stu
{
       char a[50];
       struct stu* b;
};
int main()
{
struct stu* p1,* p2,stu;
p1=p2=&stu;
p1->b=NULL;
gets(p1->a);
for(;;)
{
       if(strcmp(p2->a,"end")==0)  break;
       p2=(struct stu*)malloc(N); 
       gets(p2->a);
       p2->b=p1;
       p1=p2;
      
} 
p2=p2->b;
for(;;)
{
       printf("%s",p2->a);
       if(p2->b==NULL) break;
       p2=p2->b;  
       printf("\n");
}

}
