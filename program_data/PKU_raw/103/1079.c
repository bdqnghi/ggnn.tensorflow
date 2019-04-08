int main()
{
    char a[1000];
    int  b=1;
    scanf("%s",a);
    int c=strlen(a),i;
    for(i=0; (a[i]=toupper(a[i]))!=0;i++);
    i=0;
    while(i<c)
    {
     if(a[i]==a[i+1])
          b++  ;   
     else 
     {
          printf("(%c,%d)",a[i],b);
     b=1;
     }
     i++;
    } 
}   