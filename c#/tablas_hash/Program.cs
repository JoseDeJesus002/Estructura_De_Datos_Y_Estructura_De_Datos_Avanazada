using System.Collections;
namespace tablas_hash
{
   public class tablas_hash
   {
    Hashtable table = new Hashtable();
    public void datos(){
        table.Add("ds","sdads");
    }
    public void agregardatos(string n,string x){
        try
        {
            table.Add(n,x); //valida que las claves no sean igual 
        }
        catch
        {
            Console.WriteLine("Un elemento de la lista ya tiene la clave "+n+" intenta de nuevo ");
        }   
    
    }
    public void mostrarDatos()
    {
        Console.WriteLine("Ingrese la clave del elemento guardado es: ");
        string cadena = Console.ReadLine();
        Console.WriteLine("El elemento encontrado es:");
        Console.WriteLine(table[cadena]); //imprime los datos que contenga la clave
        Console.ReadKey();
    }
   }
   public class menu //calse para el menu
   {
       public void menu_()
       {
        int opc,d;
        string n,x;
        tablas_hash muestra;
            muestra=new tablas_hash();
            do
            {
                Console.WriteLine("1. Agregar");
                Console.WriteLine("2. mostrar");
                Console.WriteLine("3. Salir");
                Console.WriteLine("Ingresa la opcion a realizar: ");
                opc=Convert.ToInt32(Console.ReadLine());
                switch(opc)
                {
                case 1:
                Console.WriteLine("Cuantos datos desea ingresar: ");
                d=Convert.ToInt32(Console.ReadLine());
                for(int i=0;i<d; i++) //para el numero de datos a ingresar
                {
                Console.WriteLine("Ingresa la palabra clave para registrarlo: ");
                n=Console.ReadLine();
                Console.WriteLine("Ingresa el nombre de el juego: ");
                x=Console.ReadLine();
                muestra.agregardatos(n,x);
                }
                break;
                case 2:
                muestra.mostrarDatos();
                break;
                }
            Console.ReadKey();//para detener y poder ver los datos
            Console.Clear();//para borrar datos de la consola 
            }while(opc!=3);
       }
   }
    class program
    {
        static void Main(string[]args)
        {
            menu main;
            main=new menu();
            main.menu_();
        } 
    }
}



