import java.util.LinkedList;
public class Radix
{
    int []arr={23,1,4,98,132,42};
    sort(arr);
}
public static void sort(int[]arr){
    int radix=getRadix(arr);
    LinkedList<Integer>[]list=new LinkedList[10];
    for (int i=0;i<list.length;i++){
        list[i]=new LinkedList<>();
    }
    for (int r=1;r<=radix;r++){
        for (int i=0;i<arr.length;i++){
            list
        }
    }
}