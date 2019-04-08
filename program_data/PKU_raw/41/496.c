int guess[5],used[5],place[5];
void find(int lev){
    int i;
    if (lev==5){
       if (guess[1]==4 || guess[2]==4 || guess[1]!=1) return;
       switch (guess[0]){
              case 0:
                   return;
              case 1:
                   break;
              case 2:
                   if (guess[4]!=0) return;
                   break;
              case 3:
                   break;
              case 4:
                   return;
       }
       switch (guess[1]){
              case 0:
                   if (guess[0]!=4) return;
                   break;
              case 1:
                   break;
              case 2:
                   if (guess[4]!=0) return;
                   break;
              case 3:
                   if (guess[0]==2) return;
                   break;
              case 4:
                   if (guess[0]!=3) return;
                   break;
       }
       if (guess[0]!=0 && guess[1]!=0 && guess[0]==4)
          return;
       if (guess[0]!=2 && guess[1]!=2 && guess[4]==0)
          return;
       if (guess[0]!=3 && guess[1]!=3 && guess[0]!=2)
          return;
       if (guess[0]!=4 && guess[1]!=4 && guess[0]==3)
          return;
       for (i=0;i<5;i++)
           place[guess[i]]=i+1;
       for (i=0;i<5;i++){
if (i)putchar(' ');
           printf("%d",place[i]);
}
       putchar('\n');
    }
    for (i=0;i<5;i++)
        if (!used[i]){
           used[i]=1;
           guess[lev]=i;
           find(lev+1);
           used[i]=0;
        }
}
int main()
{
    find(0);
    //while (2);
    return 0;
}
