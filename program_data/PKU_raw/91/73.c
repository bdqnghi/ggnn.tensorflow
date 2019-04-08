int main()
{ char a[1000];
int  i,b[1000],cout;cout=0;
gets(a);
for(i=0;;i++){if(a[i]=='\0'){break;}else{cout++;}

}

for(i=0;i<=cout-2;i++){
	b[i]=(int)a[i]+(int)a[i+1];
}
b[cout-1]=(int)a[cout-1]+(int)a[0];
for(i=0;i<=cout-1;i++)
{printf("%c",b[i]);}


return 0;

}