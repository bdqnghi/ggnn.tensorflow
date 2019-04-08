struct list
{
   int n;
   char*str;
};
typedef struct list*plist;
plist create()  
{
  plist p1list=(plist)malloc(sizeof(struct list));
  if(p1list!=NULL)
  {
     p1list->str=(char*)malloc(sizeof(int)*maxnum);
     if(p1list->str)
       return p1list;
  }
  return NULL;
}
int l=0;
void plusdzs(plist palist,plist pblist,plist pclist)  
{ 
  int a,b,l1,l2,i;
  l1=(int)strlen(palist->str);
  l2=(int)strlen(pblist->str);
  while(l1>0||l2>0)
  {
     a=l1>0?palist->str[l1-1]-'0':0;
     b=l2>0?pblist->str[l2-1]-'0':0;
     if(l==0)
     {pclist->str[l+1]=(a+b)/10;
     pclist->str[l]=(a+b)%10;}
     else
     {pclist->str[l+1]=(pclist->str[l]+a+b)/10;
     pclist->str[l]=(pclist->str[l]+a+b)%10;}
     l1--;
     l2--;
     l++;
  }
}
void printout(plist pclist,int l)
{ 
  while(l>0&&pclist->str[l]==0)
  l--;
  int i;
  for(i=l;i>=0;i--)
  printf("%d",pclist->str[i]);
}
main()
{
  plist palist=create();
  plist pblist=create();
  plist pclist=create();
  scanf("%s%s",palist->str,pblist->str);
  plusdzs(palist,pblist,pclist);
  printout(pclist,l);

}
  