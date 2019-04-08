int main()
{
 int q;
 char a[255];
 scanf("%d",&q);
 for(int i=0;i<=q-1;i++)
 { 
   scanf("%s",a);
   for(int j=0;j<=strlen(a)-1;j++)
    {
        if(a[j]==65){printf("T");}
        else if(a[j]==84){printf("A");}
        else if(a[j]==71){printf("C");}
        else if(a[j]==67){printf("G");}  
    }
  printf("\n");
  }
  int y; 
  scanf("%d",&y);
    return 0;
    }
    
