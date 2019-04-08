char *name[] = { "Mon.","Tue.","Wed.", "Thu.", "Fri.", "Sat.", "Sun."
               };
int main(){
  int D,M,Y,A;
  scanf("%d%d%d",&Y,&M,&D);
  if ((M == 1) || (M == 2)){
    M += 12;
    Y--;
  }
  A = (D + 2*M + 3*(M+1)/5 + Y + Y/4 - Y/100 + Y/400) % 7;
  printf("%s\n",name[A]);
}
