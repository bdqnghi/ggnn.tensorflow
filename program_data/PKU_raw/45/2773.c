int locate(char [],char []);
int main()
{
    char a[100],b[100];
    scanf("%s",a);scanf("%s",b);
    printf("%d",locate(a,b));
    return 0;
}

int locate(char a[],char b[])//?????????
{
    int i,j=0;
    int len=strlen(a),lene=strlen(b);
    for(i=0;i<lene;i++)//?????????????????
    {
        int k=i;
        while(j<len)
        {

            if(a[j]==b[k])
            {
                  if(j==len-1)
                {
                return (i);break;
                }
                j++;k++;
              
            }
            else
            {
                j=0;break;
            }



        }
    }

}
