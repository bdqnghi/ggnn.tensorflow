int main()
{
    int n,i,A=0,B=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
     {scanf("%d%d",&a[i],&b[i]);
      if((3+a[i]-b[i])%3==2)
       A++;
      if((3+a[i]-b[i])%3==1)
       B++;
     }
    if(A>B)
     printf("A");
    else if(B>A)
     printf("B");
    else
     printf("Tie");
}
