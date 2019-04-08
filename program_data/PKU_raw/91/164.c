int main()
{int i;
 char a[200],*p,*head;
 p=a;
 head=a;
 gets(a);
 i=strlen(a);

 for(p=a;p<a+i-1;p++){
                            printf("%c",*p+*(p+1));
                            }
 printf("%c",*p+*head);
   scanf("%d",&i);
return 0;
}
