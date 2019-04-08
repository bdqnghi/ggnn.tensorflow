int main()
{
    struct student
    {
        char num[20];
        char name[20];
        char sex;
        int age;
        float mark;
        char address[20];
        struct student *next;
        struct student *pre;
    };
    struct student *stu;
    stu=(struct student*)malloc(LEN);
    stu->pre=NULL;
    while (1)
    {
        scanf ("%s",stu->num);
        if (strcmp(stu->num,"end")==0)
        break;
        scanf ("%s %c %d %f %s",stu->name,&stu->sex,&stu->age,&stu->mark,stu->address); 
        stu->next=(struct student*)malloc(LEN);
        stu->next->pre=stu;
        stu=stu->next;
    }
    stu=stu->pre;
    free(stu->next);
    for ( ;stu!=NULL; )
    {
        printf("%s %s %c %d %g %s\n",stu->num,stu->name,stu->sex,stu->age,stu->mark,stu->address);
        stu=stu->pre;
        if (stu!=NULL)
        free (stu->next);
    }
    return 0;
}
