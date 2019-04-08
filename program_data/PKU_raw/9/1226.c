struct patient{
  char id[10];
  int age;
}young[100],old[100];

int main(){
   int i,j,n,temp,yn=0,on=0,people[150]={0};
   char t[10];
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%s%d",t,&temp);
       if(temp>=60){
          strcat(old[on].id,t);
          old[on].age=temp;
          on++;
          people[temp]++;
       }
       else{
          strcat(young[yn].id,t);
          young[yn].age=temp;
          yn++;
       }
   }
   for(i=149;i>=60;i--){
       if(people[i]>0){
          for(j=0;j<on;j++)
             if(old[j].age==i)
                printf("%s\n",old[j].id);  
       }
   }
   for(i=0;i<yn;i++)
     printf("%s\n",young[i].id);
}
