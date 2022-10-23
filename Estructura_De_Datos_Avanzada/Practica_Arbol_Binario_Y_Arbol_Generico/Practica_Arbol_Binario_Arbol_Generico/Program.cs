<<<<<<< HEAD:Estructura de Datos Avanzada/Garafo 1/Grafo/Program.cs
﻿using System;
using System.Collections.Generic; 
using System.Linq; 
using System.Text;

namespace Grafo
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
=======
﻿using System;

namespace Arbol_generico
{
    class program
    {
    class CNodo
    {
        private string dato;

        private CNodo hijo;
        private CNodo hermano;

        public string Dato {get => dato; set => dato = value;}
        public CNodo Hijo {get => hijo; set => hijo = value;}
        public CNodo Hermano {get => hermano; set => hermano = value;}

        public CNodo()
        {
            dato = "";
            hijo = null;
            hermano = null;
        }
    }

    class CArbol
    {
        private CNodo raiz;
        private CNodo trabajo;
        private int i = 0;

        public CArbol()
        {
            raiz = new CNodo();
        }

        public CNodo Insertar(string pDato, CNodo pNodo)
        {
            if(pNodo==null)
            {
                raiz = new CNodo();
                raiz.Dato = pDato;

                //no hay hijo
                raiz.Hijo = null;

                //no hay hermano
                raiz.Hermano = null;

                return raiz;
            }

            // verificamos si no tiene hijo
            // Insertamos el dato como hijo
            if(pNodo.Hijo == null)
            {
                CNodo temp = new CNodo();

                temp.Dato = pDato;

                //conectamos el nuevo nodo como hijo
                pNodo.Hijo = temp;

                 return temp; 
            }
            else // ya tiene un hijo tnemeos quie insertarlo como hermano
            {
                trabajo = pNodo.Hijo;

                // Avanzamos hasta el ultimo hermano
                while(trabajo.Hermano != null)
                {
                    trabajo = trabajo.Hermano;
                }

                //creamos nodo temporal
                CNodo temp = new CNodo();

                temp.Dato = pDato;

                //unimos el temp al ultimo hermano
                trabajo.Hermano = temp;

                return temp;
            }
        }
        //preorder
        public void Preo(CNodo pNodo)
        {
            if(pNodo == null)
                return;
            
            //proceso primero a mi
            for(int  n = 0; n < i; n++)
                Console.Write(" ");

            Console.WriteLine(pNodo.Dato);
            //luego porceso a mi hijo
            if(pNodo.Hijo != null)
            {
                i++;
                Preo(pNodo.Hijo);
                i--;
            }

            //si tengo hermanos los proceso
            if(pNodo.Hermano != null)
                Preo(pNodo.Hermano);
        }
        //postorder
        public void postO(CNodo pNodo)
        {
            if(pNodo == null)
                return;

            //primero proceso al hijo
            if(pNodo.Hijo != null)
            {
                i++;
                postO(pNodo.Hijo);
                i--;
            }

            // si tengo hermanos los proceso
            if(pNodo.Hermano != null)
                postO(pNodo.Hermano);

            //luego proceso al nodo padre
            for(int n = 0; n < i; n++)
                Console.Write(" ");

            Console.WriteLine(pNodo.Dato);
        }
    }
        static void Main(string[] args)
        {
            CArbol arbol = new CArbol();
            int x=0;
            string datoRaiz="";
            string datoPadre="";

            //ingresa el dato de la raiz
            Console.WriteLine("Ingresa la raiz del arbol");
            datoRaiz=Console.ReadLine();
            
            //Ingresa el numero de nodos padre
            CNodo raiz = arbol.Insertar(datoRaiz,null);
            Console.WriteLine("Ingresa el numero de padre");
            x=Convert.ToInt32(Console.ReadLine());

            //ingreso de los padres
            for (int i=0; i<x; i++){
            Console.WriteLine("Ingresa la raiz del padre");
            datoPadre=Console.ReadLine();
            arbol.Insertar(datoPadre, raiz);
            }
            //arbol.Insertar("c", raiz);

            CNodo n = arbol.Insertar("d",raiz);
            arbol.Insertar("h",n);

            n = arbol.Insertar("e",raiz);
            arbol.Insertar("i",n);
            n = arbol.Insertar("j", n);
            arbol.Insertar("p",n);
            arbol.Insertar("q",n); 
            arbol.Preo(raiz);
            Console.WriteLine("----------");
            arbol.postO(raiz);
            Console.WriteLine("---------");
            Console.WriteLine(raiz);
        }
    }

} 
>>>>>>> a87372bb638d894824249080162d360a7f96c8db:Estructura de Datos Avanzada/Garafo 1/Program.cs
