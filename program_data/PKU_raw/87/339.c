
int main()
{
  int a=0,b,c,d,e,f;
  while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)&&a!=0)
  {
    int total=0;
	total=(12-a)*60*60+(d-1)*3600;
	total+=3600-b*60-c;
	total+=e*60+f;
	printf("%d\n",total);
  }
  
return 0;
}