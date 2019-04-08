struct patience
{
       int shunxu;
       char id[10];
       int age;
       } pa[100];
int main()
{
    int n,i,j,p=60,q=0;
    scanf("%d",&n);
    int a[n];
    int b[n],c[n];
    for(i=0;i<n;i++)
	{
                     scanf("%s%d",&pa[i].id,&pa[i].age);
                     }
    for(i=0;i<n;i++){
                     if(pa[i].age>=60)
					 {
                                       q++;
                                       }
                     }
    do{
    for(i=0;i<n;i++)
	{
                     if(pa[i].age>=p)
					 {
                                      p=pa[i].age;
                                      }
                     }
    for(i=0;i<n;i++)
	{
                     if(pa[i].age==p){
                                      printf("%s\n",pa[i].id);
                                      pa[i].age=0;
                                      }
                     }
    p=60;
    q--;
    }
	while(q>0); 
    for(i=0;i<n;i++)
	{
                     if(pa[i].age<60 && pa[i].age>0){
                                     printf("%s\n",pa[i].id);
                                     }
                                     }
    return 0;
}
