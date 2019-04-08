int main()
{
  int n,sum=0;
  int AS[1000];
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
      if((i%7!=0)&&(i!=17&&i!=27&&i!=37&&i!=47&&i!=57&&i!=67&&i!=71&&i!=72&&i!=73&&i!=74&&i!=75&&i!=76&&i!=78&&i!=79&&i!=87&&i!=97)){
              sum+=i*i;
              }
      else{
              sum+=0;
              }
            }
      printf("%d",sum);
      return 0;
    }

