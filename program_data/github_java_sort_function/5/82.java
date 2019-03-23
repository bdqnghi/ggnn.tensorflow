import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
      
        for(int i=0;i<n;i++){
        	for(int j=0;j<n-1;j++){
        		if(a[j]>a[j+1]){
        			temp=a[j];
        			a[j]=a[j+1];
        			a[j+1]=temp;
        			
        			total++;
        			swap=1;
        		}
        		
        	}
        	
        	if(swap==0)break;
        }

    }


}
