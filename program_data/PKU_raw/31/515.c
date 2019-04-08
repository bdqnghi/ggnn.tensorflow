struct Stu
{
    char stu[100];
    struct Stu *link;
};
int main()
{
    struct Stu *p1,*p2;
    p2=p1=(struct Stu *)malloc(LEN);
    gets(p1->stu);
    p1->link=NULL;
    for(;;)
    {
        p2=p1;
        p1=(struct Stu *)malloc(LEN);
        gets(p1->stu);
        p1->link=p2;
        if(strcmp(p1->stu,"end")==0) break;
    }
    for(;;)
    {
        puts(p2->stu);
        p2=p2->link;
        if(p2==NULL) break;
    }
    return 0;
}
