int main()
{
    int x,y,ercha(int x,int y);
    scanf("%d %d",&x,&y);
    printf("%d",ercha(x,y));
    return 0;
}

int ercha(int x,int y)
{
          if(x==y) return x;
          else
          {
              if(x>y)
              {
              x=x/2;
              }
              else
              {
              y=y/2;
              }
              ercha(x,y);
          }
}