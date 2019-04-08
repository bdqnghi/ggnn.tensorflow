main()
{
struct patient{
       char id[11];
       int age;
       }ren[100];
struct oldp{
       char idold[11];
       int ageold;
       }oldren[100];      
struct youngp{
       char idyoung[11];
       int ageyoung;
       }youngren[100];//????? 
int old[100],young[100];
int n,i,t,j,oldindex=0,youngindex=0;
char num[4],idinter[11];
gets(num);
n=atoi(num);
for(i=0;i<n;i++){
   scanf("%s %d",ren[i].id,&ren[i].age);//??id??? 
   }
for(i=0;i<n;i++){
   if(ren[i].age>=60){
      oldren[oldindex].ageold=ren[i].age;
      strcpy(oldren[oldindex].idold,ren[i].id);
      oldindex+=1;//??????? 
      }else{
           youngren[youngindex].ageyoung=ren[i].age;
           strcpy(youngren[youngindex].idyoung,ren[i].id);
           youngindex+=1;
            }//??????? 
   }
for(i=1;i<oldindex;i++){
   for(j=0;j<oldindex-i;j++){
      if(oldren[j].ageold<oldren[j+1].ageold){
        t=oldren[j].ageold;
        oldren[j].ageold=oldren[j+1].ageold;
        oldren[j+1].ageold=t;//???????? 
        strcpy(idinter,oldren[j].idold);//?????????id? 
        strcpy(oldren[j].idold,oldren[j+1].idold);
        strcpy(oldren[j+1].idold,idinter);
        }
      }
   }
for(i=0;i<oldindex;i++){
   printf("%s\n",oldren[i].idold);
   }
for(i=0;i<youngindex;i++){
    printf("%s\n",youngren[i].idyoung);
   }
   }

