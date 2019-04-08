
struct student{
               char info[100];
               struct student *before;
               }student[10000];

int main()
{
    void print(struct student *p);
    int i=0,j;
    char a[10000][100];
    gets(a[0]);
    while(a[i][0]!='e'){
                        strcpy(student[i].info,a[i]);
                        i++;
                        gets(a[i]);
                        }
    student[0].before=NULL;
    for(j=0;j<=i-1;j++){
                      student[j+1].before=&student[j];
                      }
    print(&student[i-1]);
    return 0;
    }

void print(struct student *p)
{
     printf("%s\n", p->info);
     if(p->before!=NULL){print(p->before);}
     }
