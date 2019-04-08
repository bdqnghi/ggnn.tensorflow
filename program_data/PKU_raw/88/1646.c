int main()
{
 char s[50];
 cin.getline(s,51);
 int i=0;
 while(s[i]!='\0')
 {
   while(s[i]<=57&&s[i]>=48)
   {
	   cout<<s[i];i++;
	   if(s[i]>57||s[i]<48) cout<<'\n';
   }
   i++;
 }
 return 0;
}