import java.util.*;
public class reverseSubstring {
    static boolean isSorted(StringBuilder s){
        for(int i=0; i<s.length()-1; i++){
            if(s.charAt(i)>s.charAt(i+1))   return false;
        }

        return true;
    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        StringBuilder s = new StringBuilder(scn.next());
        if(isSorted(s)){
            System.out.println("NO");
        }
        else{
            System.out.println("YES");
            int l = 0;
            int r = 0;
            for(int i=0; i<n-1; i++){
                if(s.charAt(i)>s.charAt(i+1)){
                    l = i+1;
                    r = i+2;
                    break;
                }
            }
            System.out.println(l + " " + r);
        }
        scn.close();
    }
}
