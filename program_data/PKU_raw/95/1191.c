
int min(int x,int y)
{
    return (x<y?x:y);
}
int main()
{
    char ans='=';
    char str1[90],str2[90];
    cin.getline(str1,90);
    cin.getline(str2,90);
    int x='a'-'A';
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<min(len1,len2);i++)
    {if(str1[i]>='a'&&str1[i]<='z') str1[i]=str1[i]-x;
      if(str2[i]>='a'&&str2[i]<='z') str2[i]=str2[i]-x;
    
      if(str1[i]>str2[i])  {ans='>'; break;}
 
     else if(str2[i]>str1[i])  {ans='<'; break;}}
    cout<<ans<<endl;

    return 0;
}
