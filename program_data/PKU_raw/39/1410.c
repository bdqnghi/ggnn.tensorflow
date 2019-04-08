void main()
{
   struct stu
   {char a[20];
    int chj;
    int pin;
    char gb;
    char xb;
    int lunwen;
    int reward;
    };
  struct stu student[100];
  int i,n,jishu,sum=0;
  scanf("%d",&n);
 for(i=0;i<n;i++)
   scanf("%s %d %d %c %c %d",student[i].a,&student[i].chj,
&student[i].pin,&student[i].gb,&student[i].xb,&student[i].lunwen);
for(i=0;i<n;i++)
 student[i].reward=0;
for(i=0;i<n;i++)
  {if(student[i].chj>80&&student[i].lunwen>0)
     student[i].reward=student[i].reward+8000;
     
     if(student[i].chj>85&&student[i].pin>80)
        student[i].reward=student[i].reward+4000;

     if(student[i].chj>90)
        student[i].reward=student[i].reward+2000;

     if(student[i].chj>85&&student[i].xb=='Y')
        student[i].reward=student[i].reward+1000;

     if(student[i].pin>80&&student[i].gb=='Y')
        student[i].reward=student[i].reward+850;
  }
   jishu=0;
for(i=0;i<n;i++)
  {if(student[i].reward>student[jishu].reward)
     jishu=i;
  }
   for(i=0;i<n;i++)
    {
        sum=sum+student[i].reward;
     }
printf("%s\n%d\n%d\n",student[jishu].a,student[jishu].reward,sum);

}