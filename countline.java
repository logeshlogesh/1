import java.io.*; 
public class LineCounter{
    public static int getLineCount(String text){
        return text.split("[\n|\r]").length;
    }
    public static void main(String a[]){
        String str="logesh\nshamili\ndharani\rthiru";
        System.out.println(str);
        int count = getLineCount(str);
        System.out.println("line count: "+count);
    }
}
