using System;
using System.Collections.Generic; 
using System.Linq; 
using System.Text;

namespace No
{
    class Program
    { 

    public class ArbolBinarioOrdenado { 

        class Nodo 

        { 

            public int info; 

            public Nodo izq, der; 

        } 

        Nodo raiz; 

 

        public ArbolBinarioOrdenado()  

        { 

            raiz=null; 

        } 

       

        public void Insertar (int info) 

        { 

            Nodo nuevo; 

            nuevo = new Nodo (); 

            nuevo.info = info; 

            nuevo.izq = null; 

            nuevo.der = null; 

            if (raiz == null) 

                raiz = nuevo; 

            else 

            { 

                Nodo anterior = null, reco; 

                reco = raiz; 

                while (reco != null) 

                { 

                    anterior = reco; 

                    if (info < reco.info) 

                        reco = reco.izq; 

                    else 

                        reco = reco.der; 

                } 

                if (info < anterior.info) 

                    anterior.izq = nuevo; 

                else 

                    anterior.der = nuevo; 

            } 

        } 

 

 

        private void ImprimirPre (Nodo reco) 

        { 

            if (reco != null) 

            { 

                Console.Write(reco.info + " "); 

                ImprimirPre (reco.izq); 

                ImprimirPre (reco.der); 

            } 

        } 

 

        public void ImprimirPre () 

        { 

            ImprimirPre (raiz); 

            Console.WriteLine(); 

        } 

 

        private void ImprimirEntre (Nodo reco) 

        { 

            if (reco != null) 

            {     

                ImprimirEntre (reco.izq); 

                Console.Write(reco.info + " "); 

                ImprimirEntre (reco.der); 

            } 

        } 

 

        public void ImprimirEntre () 

        { 

            ImprimirEntre (raiz); 

            Console.WriteLine(); 

        } 

 

 

        private void ImprimirPost (Nodo reco) 

        { 

            if (reco != null) 

            { 

                ImprimirPost (reco.izq); 

                ImprimirPost (reco.der); 

                Console.Write(reco.info + " "); 

            } 

        } 

 

 

        public void ImprimirPost () 

        { 

            ImprimirPost (raiz); 

            Console.WriteLine(); 

        } 

 

        static void Main(string[] args) 

        { 

            ArbolBinarioOrdenado abo = new ArbolBinarioOrdenado ();
            int num=0,num2=0,num3=0,num4=0,num5=0;
            
                Console.WriteLine("Ingresa los datos: "); 
                num=Convert.ToInt32(Console.ReadLine());
                 num2=Convert.ToInt32(Console.ReadLine());
                 num3=Convert.ToInt32(Console.ReadLine());
                 num4=Convert.ToInt32(Console.ReadLine());
                 num5=Convert.ToInt32(Console.ReadLine());

            abo.Insertar (num); 

            abo.Insertar (num2); 

            abo.Insertar (num3); 

            abo.Insertar (num4); 

            abo.Insertar (num5); 

            Console.WriteLine ("Impresion preorden: "); 

            abo.ImprimirPre (); 

            Console.WriteLine ("Impresion entreorden: "); 

            abo.ImprimirEntre (); 

            Console.WriteLine ("Impresion postorden: "); 

            abo.ImprimirPost (); 

            Console.ReadKey(); 

        } 

    } 

}
} 
