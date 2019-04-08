int main()
{
    int i,j,c;
    char a[1001];
    scanf("%s",a);
    j=1;
    for(i=0;i<1001;i++)
    {
      if(a[i]=='\0')
      {c=i;
      break;}
    }
    for(i=0;i<c;i++)
    {
       if(((a[i]-'a')==(a[i+1]-'a'))||((a[i]-'a')==(a[i+1]-'A'))||((a[i]-'A')==(a[i+1]-'a')))
         j+=1;
        else    
           {
             if((a[i]>='a')||(a[i]<'A'))
              {a[i]=a[i]+'A'-'a';}
           printf("(%c,%d)",a[i],j);
            j=1;
           }
    }
   // getchar();
    //getchar();
    return 0;
}
