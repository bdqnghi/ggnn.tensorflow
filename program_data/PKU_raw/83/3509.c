int main()
{
     int s1[10],s2[10];
     float gpa[10],k,sum=0,sum2=0;
     int i,n;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
             scanf("%d",&s1[i]);
             sum=sum+s1[i];
     }   
     for(i=1;i<=n;i++)
     {
             scanf("%d",&s2[i]);
             if(s2[i]>=90) gpa[i]=4.0;
             else if(s2[i]>=85&&s2[i]<=89) gpa[i]=3.7;
             else if(s2[i]>=82&&s2[i]<=84) gpa[i]=3.3;
             else if(s2[i]>=78&&s2[i]<=81) gpa[i]=3.0;
             else if(s2[i]>=75&&s2[i]<=77) gpa[i]=2.7;
             else if(s2[i]>=72&&s2[i]<=74) gpa[i]=2.3;
             else if(s2[i]>=68&&s2[i]<=71) gpa[i]=2.0;
             else if(s2[i]>=64&&s2[i]<=67) gpa[i]=1.5;
             else if(s2[i]>=60&&s2[i]<=63) gpa[i]=1.0;
             else gpa[i]=0;
             sum2=sum2+s1[i]*gpa[i];
     }
     k=sum2/sum;          
     printf("%.2f",k);
     return 0;
}