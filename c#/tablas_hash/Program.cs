//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;
using System.Collections;

namespace tablas_hash
{
   public class tablas_hash{
       Hashtable table = new Hashtable();
        public void agregardatos(){
        table.Add("for","Fortnite ");
        table.Add("lol","League Legends ");
        table.Add("mine","Minecraft ");
        table.Add("cr","Clash Royale ");   
    }
    public void mostrarDatos(){
        Console.WriteLine("El elemento {0} es: ");
        string cadena = Console.ReadLine();
        Console.WriteLine("El elemento encontrado es:");
        Console.WriteLine(table[cadena]);
        Console.ReadKey();
    }

   }
    class program{
        static void Main(string[]args){
            tablas_hash muestra;
            muestra=new tablas_hash();
            muestra.agregardatos();
            muestra.mostrarDatos();
        } 
    }

}



