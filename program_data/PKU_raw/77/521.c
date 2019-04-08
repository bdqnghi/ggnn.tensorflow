//????????
//??????
//?????2011-1-8 


int main()
{
    char str[500],s1;
    int i,j,t,boy[500],girl[500],p=0,n=0,list[500];
    gets(str);
    s1=str[0];
    for (i=0;i<strlen(str);i++)//???? 
      if (str[i]==s1) {p++;list[p]=i;}
      else {n++;girl[n]=i;boy[n]=list[p];p--;}//??????? 
    for (i=1;i<=n;i++)//?? 
      for (j=1;j<i;j++)
        if (girl[i]<girl[j])
          {
              t=girl[i];
              girl[i]=girl[j];
              girl[j]=t;
              t=boy[i];
              boy[i]=boy[j];
              boy[j]=t;
          }
    for (i=1;i<=n;i++)//?? 
      {
          cout<<boy[i]<<" "<<girl[i];
          if (i!=n) cout<<endl;
      }
    return 0;
}
