/*
 * @Author: Haitian Li
 * @Date: 2021-03-05 20:16:13
 * @LastEditors: Haitian Li
 * @LastEditTime: 2021-03-05 20:29:57
 * @Description: I do not wish to be horny anymore,
 *               I just want to be happy.
 */


 //倒置字符串
import java.util.*;

 public class Main{

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);

        HashMap<Integer, String> map = new HashMap<>();

        int i = 0;
        while (scan.hasNext()) {
            map.put(i, scan.next());
            i++;
        }
        i--;

        while (i >= 0) {
            if (i != 0) {
                System.out.printf("%s ", map.get(i));
            } else {
                System.out.printf("%s", map.get(i));
            }
            i--;
        }
    }
 }
