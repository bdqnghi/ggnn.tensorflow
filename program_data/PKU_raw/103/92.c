

int main()
{
 char a[10000],b[10000];
 int l,zushu=0,c[10000]={1};
 gets(a);
 
 l=strlen(a);
 for(int i=0;i<l;i++)
 if(a[i]>='a'&&a[i]<='z')
                       a[i]=a[i]+('A'-'a'); 
 b[0]=a[0];          
 
 for(int i=0;i<l-1;i++)
            {
             
             if(a[i]==a[i+1])
                     {
                      c[zushu]++;
                      
                             
                     }
             else
                     {zushu++;
                      
                      b[zushu]=a[i+1];
                             
                     }        
            }
 printf("(%c,%d)",b[0],c[0]);
 for(int i=1;i<=zushu;i++)
 {
 
 
 printf("(%c,%d)",b[i],c[i]+1);    
}
getchar();
getchar();
}
