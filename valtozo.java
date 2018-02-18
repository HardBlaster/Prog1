import java.util.Scanner;

class valtozo
{
	public static void main(String args[])
	{
	Scanner user_input = new Scanner(System.in);
	int a, b;
	System.out.println("Kérem az a változót: ");
	a = user_input.nextInt();
	System.out.println("Kérem a b változót: ");
	b = user_input.nextInt();

	a = b - a;
	b = b - a;
	a = b + a;
	System.out.println("Kivonás-összeadással: ");
	System.out.println("a=" + a);
	System.out.println("b=" + b);

	a = a * b;
	b = a / b;
	a = a / b;
	System.out.println("Szorzás-osztással: ");
	System.out.println("a=" + a);
	System.out.println("b=" + b);
	}
}
