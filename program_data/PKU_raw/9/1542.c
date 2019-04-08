struct senex
{
       char id[10];
       int age;
       int rec;
} sen[100],t;
int n;

int main()
{
    int i,j,k,l;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
      scanf("%s%d",sen[i].id,&sen[i].age);
      if(sen[i].age>=60) sen[i].rec=1;
      else sen[i].rec=0;
    }
    for(i=1;i<n;i++)
     for(j=0;j<n-i;j++)
      if(sen[j].rec<sen[j+1].rec)
      {
        t=sen[j];
        sen[j]=sen[j+1];
        sen[j+1]=t;
      }
    k=0;
    while(sen[k].rec==1) k++;
    for(i=1;i<k;i++)
     for(j=0;j<k-i;j++)
      if(sen[j].age<sen[j+1].age)
      {
        t=sen[j];
        sen[j]=sen[j+1];
        sen[j+1]=t;
      }
    //for(i=0;i<n;i++)
     //printf("%d ",sen[i].rec);
    for(i=0;i<n;i++)
     printf("%s\n",sen[i].id);
    scanf("%d",&i);
    return 0;
}