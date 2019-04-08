struct stu
{
char gen[7];
float hei;              
};  

int main()
{

struct stu stu[40],t; //shifouyaogaichengdongtai?
int n,i,j,s=0;

scanf("%d",&n);
for(i=0;i<n;i++)
                {
                        scanf("%s %f",stu[i].gen,&stu[i].hei);
               }

for(j=0;j<n;j++)
for(i=0;i<n-1-j;i++)                
{
   if(stu[i].hei>stu[i+1].hei)
    {t=stu[i];
     stu[i]=stu[i+1];
     stu[i+1]=t;}
}

for(i=0;i<n;i++)
{
               if(strlen(stu[i].gen)==4) 
              //  if(*(stu[i]).gen=='male')
              {
                  if(s==0)
              {printf("%.2f",stu[i].hei);s++;}
              else{printf(" %.2f",stu[i].hei);}
              }
}

for(i=n-1;i>=0;i--)
{
    if(strlen(stu[i].gen)!=4)                 
  //if(*(stu[i]).gen!='male') 
  printf(" %.2f",stu[i].hei);             
}

return 0;    
}
//zifuchuanbijiaoyaoyonghanshu
