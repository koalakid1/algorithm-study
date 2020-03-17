import java.util.Scanner;

public class bk2884{
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		if (b-45 >= 0) {
			
			System.out.println(a + " " + (b-45));
			
		}
		else {
			
			System.out.println( (a+23)%24 + " " + (b+15));
			
		}
		
	}

}