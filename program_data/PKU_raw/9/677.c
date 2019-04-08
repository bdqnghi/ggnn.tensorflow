struct person
{
    char ID[10];
    int age;

} per[100];
int main()
{
   int i,n,j,k=0,a[100]={0},num=0,temp1;
   char b[100][10]={0},temp2[10]={0};
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%s %d",per[i].ID,&per[i].age);
   for(i=0;i<n;i++)
   {
       if(per[i].age>=60)
    {
        a[k]=per[i].age;
        strcpy(b[k],per[i].ID);
        k++;
        num++;
    }
   }
    for(j=0;j<num;j++)
    {
        for(k=0;k<num-j;k++)
        if(a[k]<a[k+1])
        {
            temp1=a[k];
            a[k]=a[k+1];
            a[k+1]=temp1;
            strcpy(temp2,b[k]);
            strcpy(b[k],b[k+1]);
            strcpy(b[k+1],temp2);
        }
    }
    for(i=0,k=num;i<n;i++)
    {
        if(per[i].age<60)
        {a[k]=per[i].age;
         strcpy(b[k],per[i].ID);
         k++;
         num++;}
    }
    for(k=0;k<num-1;k++)
    printf("%s\n",b[k]);
    printf("%s",b[num-1]);

}
