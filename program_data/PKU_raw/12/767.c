
int main(int argc, char *argv[])
{
  int a[16],i,j,k,m;
  for(;;)
  { 
    m=0;
    scanf("%d",&a[0]);
    if(a[0]==-1)
    break;
    for(i=1;i<16;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]==0)
    break;
    }
    for(j=0;j<i;j++)
    {
         if(a[j]%2==0)
          {for(k=0;k<i;k++)
           {if((a[j]/2)==a[k])
            m++;}
           }
    }
    printf("%d\n",m);
  }                      	
  return 0;
}