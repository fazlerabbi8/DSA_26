import java.util.ArrayList;

public class arrayList {
    public static void main(String[] args) {
        ArrayList<String> arr = new ArrayList<>();

        arr.add("ali");
        arr.add("abbas");
        arr.add("ahmed");
        arr.add(1,"robi");

        // arr.remove(0);
        // arr.remove("robi");

        arr.set(0, "Rabbi");
        
        arr.forEach(System.out::println);

        System.out.println(arr.indexOf("Rabbi"));
        // System.out.println(arr.contains("robi"));

        // ArrayList<String> arr2 = new ArrayList<>();
        
        // arr2.add("apple");
        // arr2.add("orange");
        // arr2.add("pineapple");

        // arr.addAll(arr2);
        System.out.println(arr);

        // System.out.println(arr2);
    }
}
