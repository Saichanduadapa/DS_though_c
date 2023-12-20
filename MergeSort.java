import java.util.*;
public class MergeSort {
    public static void merge(int[] ar,int l,int m,int h){
        int i=l;
        int j=m+1;
        int[] res=new int[h-l+1];
        int k=0;
        while(i<=m && j<=h){
            if(ar[i]<ar[j]){
                res[k++]=ar[i++];
            }
            else{
                res[k++]=ar[j++];
            }
        }
        while (i<=m) {
            res[k++]=ar[i++];
        }
        while (j<=h) {
            res[k++]=ar[j++];
        }
        k=0;
        for(int r=l;r<=h;r++){
            ar[r]=res[k++];
        }
        
    }
    public static void mergeSort(int[] ar,int l,int h){
        if(l<h){
            int m=(l+h)/2;
            mergeSort(ar, l,m);
            mergeSort(ar, m+1, h);
            merge(ar,l,m,h);
        }
    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter no.of elements");
        int n=s.nextInt();
        int[] ar=new int[n];

        System.out.println("Enter array elements");
        for(int i=0;i<n;i++){
            ar[i]=s.nextInt();
        }
        mergeSort(ar,0,n-1);
        Arrays.sort(ar);
        System.out.println("Array after sort:-");
        for(int i:ar){
            System.out.print(i+" ");
        }
    }
}