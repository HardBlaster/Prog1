import java.lang.Math;

public class GPR {
    public static double tavolsag(double [] PR, double [] PRv, int n) {
        double osszeg = 0.0;
        for(int i=0; i<4; i++) {
            osszeg += (PRv[i] - PR[i]) * (PRv[i] - PR[i]);
        }
        return Math.sqrt(osszeg);
    }
    public static void main(String[] args) {
        double[][] L = new double[][] {
            {0.0, 0.0, 1.0/3.0, 0.0},
            {1.0, 1.0/2.0, 1.0/3.0, 1.0},
            {0.0, 1.0/2.0, 0.0, 0.0},
            {0.0, 0.0, 1.0/3.0, 0.0}
        };
        double[] PR = new double[] {0.0, 0.0, 0.0, 0.0};
        double[] PRv = new double[] {1.0/4.0, 1.0/4.0, 1.0/4.0, 1.0/4.0};
        while(true) {
            for(int i=0; i<4; i++) {
                PR[i] = 0.0;
                for(int j=0; j<4; j++) {
                    PR[i] += (L[i][j] * PRv[j]);
                }
            }
            if(tavolsag(PR, PRv, 4) < 0.0000000001) {
                break;
            }
            for(int i=0; i<4; i++) {
                PRv[i] = PR[i];
            }
        }
        for(int i=0; i<4; i++) {
            System.out.println("PageRank: " + PR[i]);
        }
    }
}