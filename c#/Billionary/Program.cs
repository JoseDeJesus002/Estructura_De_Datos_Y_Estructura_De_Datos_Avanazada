// See https://aka.ms/new-console-template for more information

namespace BILLIONARY{
class program{
    static void Main(string[] args)
    {
        int numero, puntero=0, final=9, mitad=-999;
        int [] vec={3,8,11,22,38,49,50,56,62,70};
        bool enscontrado=false;

        Console.WriteLine("Favor de ingresar  un numero: ");
        numero = int.Parse(Console.ReadLine());

        while(!enscontrado && puntero <= final){
            mitad = (int) ((puntero+final)/2);

            if(numero==vec[mitad])
            enscontrado=true;

            else if(numero<vec[mitad])
                final=mitad-1;
                else
                puntero=mitad+1;
        }

        if(enscontrado)
        Console.WriteLine("El dato se enceuntra y esta en la posicion: "+(mitad+1));
        else
        Console.WriteLine("El dato no se encuentra");
        Console.ReadKey();
    }    
    
}
}