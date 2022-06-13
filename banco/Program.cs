using System;

namespace banco
{
    class Program
    {
         public class banco
        {
            public int deposito;
           
            public void depositar(){
                Console.WriteLine("Ingresa el deposito");
                deposito=Convert.ToInt32(Console.ReadLine());
            }
            public void transferencia()
            {
                int n;
                if(deposito>0){
                Console.WriteLine("Cuanto desea transferir");
                n=Convert.ToInt32(Console.ReadLine());
                deposito=deposito-n;
                }else{
                    Console.WriteLine("No puede hacer nada");
                }
            }
            public void retiro()
            {
                int n;
                if(deposito>0){
                Console.WriteLine("Cuanto desea retirar");
                n=Convert.ToInt32(Console.ReadLine());
                deposito=deposito-n;
                }else{
                     Console.WriteLine("No puede hacer nada");
                }
            }
            public void mostrar()
            {
                Console.WriteLine(deposito);
            }
        }

        public class persona : banco
        {
            public string nombre;
            public int edad;
            public persona(string name, int age)
            {
                nombre=name;
                edad=age;
            }
            public void mostrar2()
            {
                depositar();
                transferencia();
                retiro();
                mostrar();
            }
        }
       
        static void Main(string[] args)
        {
            persona b1= new persona("Jose",45);
            b1.mostrar2();
            
            Console.WriteLine("Hello World!");
        }
    }
}
