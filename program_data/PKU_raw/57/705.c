
int main()
{
  int a,b,c,i,j,m,n;
  char u[50][33];
  scanf("%d\0",&n);
  for(i=0;i<n;i++)
  scanf("%s",u[i]);
  for(i=0;i<n;i++)
   {m=strlen(u[i]);
    if(u[i][m-2]=='l'&&u[i][m-1]=='y')  {u[i][m-2]='\0';}
    else if(u[i][m-2]=='e'&&u[i][m-1]=='r')  {u[i][m-2]='\0';}
    else if(u[i][m-3]=='i'&&u[i][m-2]=='n'&&u[i][m-1]=='g') {u[i][m-3]='\0';}
    }
    
       for(i=0;i<n;i++) {printf("%s\n",u[i]);}
    return 0; 
}

