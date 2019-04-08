
struct patient
{ char id[10];
  int year;
}pat[100];
int arrange(struct patient peop[],int num);

int main()
{
    int i,j=0,k,n,max;
    struct patient *ppat[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
                    scanf("%s%d",pat[i].id,&pat[i].year);
    for(i=0;i<n;i++){
                     if(pat[i].year>=60){
                                         ppat[j]=pat+i;j++;
                                         }
                     }
    
    struct patient *p;
    for(i=0;i<j-1;i++){
                      for(k=0;k<j-1-i;k++){
                                         if((*ppat[k]).year < (*ppat[k+1]).year){
                                                            p=ppat[k];
                                                            ppat[k]=ppat[k+1];
                                                            ppat[k+1]=p;
                                                            }
                                        }
                     } 
   
    for(i=0;i<j;i++)
                    printf("%s\n",ppat[i]->id);
    for(i=0;i<n;i++){
                     if(pat[i].year<60)
                                       printf("%s\n",pat[i].id);
                     }
    return 0;
}
