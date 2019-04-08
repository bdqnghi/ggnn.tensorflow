
int main(int argc, char *argv[])
{
  struct stu
  {
    char name[25];
    int score;
    int pinyi;
    char ganbu;
    char xibu;
    int lunwen;      
  }stu[110];
  int n,i,m;
  char str[25];
  m=0;
  int a[110];
  int total;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%s %d %d %c %c %d",&stu[i].name,&stu[i].score,&stu[i].pinyi,&stu[i].ganbu,&stu[i].xibu,&stu[i].lunwen);                
  }
  for(i=0;i<n;i++)
  {a[i]=0;
    if(stu[i].score>80&&stu[i].lunwen>=1){a[i]+=8000;}
     
    if(stu[i].score>85&&stu[i].pinyi>80){a[i]+=4000;}
   
    if(stu[i].score>90){a[i]+=2000;}
    
    if(stu[i].score>85&&stu[i].xibu=='Y'){a[i]+=1000;}
    
    if(stu[i].pinyi>80&&stu[i].ganbu=='Y'){a[i]+=850;}
                  
                  }
    for(i=0;i<n;i++)
    {
       if(a[i]>m){strcpy(str,stu[i].name);m=a[i];}              
    }
    printf("%s\n%d\n",str,m);
    total=0;
    for(i=0;i<n;i++)
    {total+=a[i];}
    printf("%d\n",total);
  	
  return 0;
}
