
/**
 *
 * @author johnny
 */
public class TiposPrimitivos {
    public static int is_negative(int value){
        int signal;
        if (value < 0){
                signal = 1;
        }
        else {
                signal = 0;
        }
        return signal;
    }

    public static void main(String[] args){
        int v = Integer.parseInt(args[0]);
        int status = is_negative(v);
        int status_novo;
        int multiplo= v, maior_multiplo , fator=1;
        do{

                maior_multiplo = multiplo;
                multiplo = fator * v;
                status_novo = is_negative(multiplo);
                fator++;


        }
        while(status_novo == status);


        System.out.println("Maior Multiplo: " + maior_multiplo + "\n");
        
    }
    
}
