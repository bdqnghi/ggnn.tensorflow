void main()
{int flag=0,numa,i,j=-1,k=0,n=0;
char a[100],
word[50][30]={'\0'};
gets(a);
numa=strlen(a);
for(i=0;i<numa;i++)
{if(a[i]==' ')
flag=0;
else if(a[i]!=' '&&flag==0)
{j++;
k=0;
word[j][k]=a[i];
k++;
flag=1;
}
else if(a[i]!=' '&&flag==1)
{word[j][k]=a[i];
k++;
}
}

int max=0,min=0;
for(i=1;i<=j;i++)
{if(strlen(word[max])<strlen(word[i]))
max=i;
if(strlen(word[min])>strlen(word[i]))
min=i;
}
puts(word[max]);
puts(word[min]);
}