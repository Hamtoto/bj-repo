import java.io.*;
import java.util.*;

class WordSort {
    private static void quickSort(int[] arr,int start, int end) {
        int part=partition(arr,start,end);
        if(start<part-1) quickSort(arr,start,part-1);
        if(end>part) quickSort(arr,part,end);
    }

    private static int partition(int[] arr,int start,int end) {
        int pivot=arr[(start+end)/2];
        while(start<=end) {
            while(arr[start]<pivot) start++;
            while(arr[end]>pivot) end--;
            if(start<=end) {
                swap(arr,start,end);
                start++;
                end--;
            }
        }
        return start;
    }

    private static void swap(int[] arr,int start,int end) {
        int tmp=arr[start];
        arr[start]=arr[end];
        arr[end]=tmp;
        return;
    }

    public static void main(String args[]) throws IOException
    {        
        String[][] str = null;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int line = Integer.parseInt(br.readLine());
        
        str = new String[line][2];
        
       // for(int i = 0; i < line; i++){
        //    str[i][0] = br.readLine();
        //    str[i][1] = Integer.toString(str[i][0].length());
        //}

        int[] arr= {7,4,2,8,3,5,1,6,10,9};
        quickSort(arr,0,arr.length-1);
        
        for(int i=0;i<arr.length;i++) {
            System.out.print(arr[i]+",");
        }


    }
}