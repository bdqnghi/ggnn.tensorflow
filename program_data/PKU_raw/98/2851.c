int main() {
 int n;
 char str[80];
 cin>>n;
 int ln=0;
 while(n--) {
  cin>>str;
  if (ln == 0) {
   cout<<str;
   ln=strlen(str)+1; 
  }
  else if (ln+strlen(str)>80) {
   cout<<endl<<str;
   ln=strlen(str)+1;
  }
  else {
   cout<<' '<<str;
   ln += strlen(str)+1;
  }

 }
 return 0;
}
