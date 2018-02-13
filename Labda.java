public class Hellow {


public static void main(String[] args) throws InterruptedException {

     int xj = 0, xk = 0, yj = 0, yk = 0;
     int row = 80 * 2, col = 24 * 2;

char escCode = 0x1B;

    for (;;)
     {
         xj = (xj - 1) % row;
         xk = (xk + 1) % row;

         yj = (yj - 1) % col;
         yk = (yk + 1) % col;



	System.out.print(String.format("%c[%d;%df",escCode,0,0)+"--------------------------------------------------------------------------------");

	System.out.print(String.format("%c[%d;%df",escCode,24,0)+"--------------------------------------------------------------------------------");

	System.out.print(String.format("%c[%d;%df",escCode,Math.abs ((yj + (col - yk)) / 2),Math.abs ((xj + (row - xk)) / 2))+'X');

	Thread.sleep(250);
        System.out.print("\033\143");

  System.out.print("\033[H\033[2J"); 
  		}
	}


}
