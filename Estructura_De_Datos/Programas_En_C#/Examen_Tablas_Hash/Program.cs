using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Examen_Tablas_Hash
{
    internal class Htable
    {
        int opc;
        Hashtable htbl;

        public Htable()
        {
            htbl = new Hashtable();
        }

        public void añadir()
        {
            int cont = -1;
            string producto, clave;

            Console.WriteLine("Ingresa el nombre del suplemento \n");
            producto = Console.ReadLine();
            cont = cont + 1;
            if (producto != null)
            {
                clave = ("PDT" + 0 + htbl.Count);
                htbl.Add(clave, producto);
                Console.WriteLine("\n Se registro el producto " + producto + " " + "Con la clave " + clave + "\n");
                Console.ReadLine();
            }
            else
            {
                Console.WriteLine("Por favor ingresa un producto \n");
            }
        }

        public void mostrar()
        {
            string clave;
            Console.WriteLine("Existen {0} productos en stock, ingresa la clave del producto que deseas ver \n", htbl.Count);
            clave = Console.ReadLine();
            if (htbl[clave] != null)
            {
                Console.WriteLine("El producto es: " + htbl[clave] + "\n");
                Console.ReadKey();

            }
            else
            {
                Console.WriteLine("Este producto no existe, asegurate de que escribiste bien su clave \n");
                Console.ReadKey();
            }
        }

        public void eliminar()
        {
            string clave;
            Console.WriteLine("Ingresa la clave del producto a eliminar \n");
            clave = Console.ReadLine();

            if (htbl[clave] != null)
            {
                htbl.Remove(clave);
                Console.WriteLine("El producto fue eliminado de manera exitosa");
                Console.ReadKey();
            }
            else
            {
                Console.WriteLine("El producto especificado no fue encontrado, verifica su clave");
            }
        }

        public void menu()
        {
            switch (opc)
            {
                case 1:
                    añadir();
                    break;
                case 2:
                    mostrar();
                    break;
                case 3:
                    eliminar();
                    break;
                case 4:
                    Console.WriteLine("Hasta pronto");
                    Console.ReadKey();
                    break;

                default:
                    Console.WriteLine("Opcion invalida");
                    break;
            }
        }
        static void Main(string[] args)
        {
            Htable table;
            table = new Htable();
            table.menu();
        }
    }
}

