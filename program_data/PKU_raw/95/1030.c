int main()
{
int i;
char str1[80],str2[80];
gets(str1);
gets(str2);
for(i=0;i<=80;i=i+1)
        {
                if(str1[i]<='z'&&str1[i]>='a')
                        str1[i]=str1[i]-32;
        }
for(i=0;i<=80;i=i+1)
        {
                if(str2[i]<='z'&&str2[i]>='a')
                        str2[i]=str2[i]-32;
        }
if(strcmp(str1,str2)>0)
        cout<<">"<<endl;
if(strcmp(str1,str2)==0)
        cout<<"="<<endl;
if(strcmp(str1,str2)<0)
        cout<<"<"<<endl;
return 0;
}