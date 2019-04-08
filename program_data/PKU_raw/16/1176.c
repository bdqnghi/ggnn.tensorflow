int main()
{
    int n,a[5];
    scanf("%d",&n);
    a[0]=n/10000;
    a[1]=n/1000-10*a[0];
    a[2]=n/100-100*a[0]-10*a[1];
    a[4]=n%10;
    a[3]=(n%100-n%10)/10;
printf("\n");
    if(n!=0){for(int i=0;i<5;i++)
       if (a[i]==0) continue;
       else {for (int j=4;j>=i;j--) printf("%d",a[j]);break;}}
else printf("0");
    }
