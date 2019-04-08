void main()
{char a[100],word[30][20]={'\0'};
int max=0,min=0,flag=0,i,j=-1,k=0,n,numa,num;
gets(a);
numa=strlen(a);
for(i=0;i<numa;i++)
{if(a[i]==' ')
{flag=0;
k=0;
}
else if(a[i]!=' '&&flag==0)
{j++;
	word[j][k]=a[i];

k++;
flag=1;
}
else if(a[i]!=' '&&flag==1)
{word[j][k]=a[i];
k++;
}
}

for(i=1;i<=j;i++)
{if(strlen(word[max])<strlen(word[i]))
max=i;
if(strlen(word[min])>strlen(word[i]))
min=i;
}

puts(word[max]);
puts(word[min]);
}