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
        String[][] arr = null;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int line = Integer.parseInt(br.readLine());
        
        arr = new String[line][2];
        
        for(int i = 0; i < line; i++){
            arr[i][0] = br.readLine();
            arr[i][1] = Integer.toString(arr[i][0].length());
        }

        quickSort(arr,0,line-1);
        
        for(int i=0;i<arr.length;i++) {
            System.out.print(arr[i]+",");
        }


    }
}