/* Author: Xiong Shihao (xsh@pku.edu.cn)
 * ID: 1000010177
 * Compiler: gcc
 */


int main()
{
    int y=0,m=0,d=0;
    scanf("%d %d %d",&y,&m,&d);
    if(m==1||m==2)
    {
                  m=m+12;
                  y--;
    } 
    int week=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7; /*???????????*/
    switch(week)
    {
                case 0: printf("Mon."); break;
                case 1: printf("Tue."); break;
                case 2: printf("Wed."); break;
                case 3: printf("Thu."); break;
                case 4: printf("Fri."); break;
                case 5: printf("Sat."); break;
                case 6: printf("Sun."); break;
   }
   return 0;
}