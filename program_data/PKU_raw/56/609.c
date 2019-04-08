int main(int argc,char *argv[])
{
    char a[6];
    scanf("%s",&a);
    int n,i;
    for(i=0;i<=5;i++)
    {
     if(a[i]=='\0')
     {
      n=i;
      break;
      }
     }
    for(i=n-1;i>=0;i--)printf("%c",a[i]);
    printf("\n");
    return 0;
}