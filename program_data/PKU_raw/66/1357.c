int main() 
{ 
int day,mn,yr,i,days=0,s,k; 
int mont[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
char wek[7][9]={ {'S','u','n'}, 
{'M','o','n'}, 
{'T','u','e'}, 
{'W','e','d'}, 
{'T','h','u'}, 
{'F','r','i'}, 
{'S','a','t'} 
      }; 
scanf("%d%d%d",&yr,&mn,&day); 
if (yr%4==0||yr%100==0||yr%400==0) 
mont[2]=29; 
else 
mont[2]=28; 
for (i=0;i<mn;i++) 
{
days+=mont[i];
} 
days+=day; 
s=yr-1+(int)((yr-1)/4)-(int)((yr-1)/100)+(int)((yr-1)/400)+days; 
k=s%7; 
printf("%s.\0",wek[k]); 
   return 0; 
}
