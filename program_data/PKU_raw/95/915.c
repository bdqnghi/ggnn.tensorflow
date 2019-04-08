int main()
{
	char a[60],b[60];//???????
	int i;
	cin.getline(a,60);
	cin.getline(b,60);

	for(i=0;a[i]!='\0';i++)//?a[60]??????????
 {
  if(a[i]>='a'&&a[i]<='z')
   a[i]=a[i]-32;
  if(a[i]>='A'&&a[i]<='Z')
            continue;
 }

     for(i=0;b[i]!='\0';i++)//?b[60]??????????
 {
  if(b[i]>='a'&&b[i]<='z')
      b[i]=b[i]-32;
  if(b[i]>='A'&&b[i]<='Z')
            continue;
 }

    if(strcmp(a,b)<0)//??
  cout<<"<";
 else if(strcmp(a,b)>0)
  cout<<">";
 else if(strcmp(a,b)==0)
  cout<<"=";
 return 0;
}