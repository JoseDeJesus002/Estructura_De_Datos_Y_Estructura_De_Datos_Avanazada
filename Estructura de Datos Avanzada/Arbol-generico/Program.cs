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
            if(pNodo.Hijo==null)
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
                while(trabajo.Hermano!=null)
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
            for(int n= 0; n < i; n++)
                Console.Write(" ");

            Console.WriteLine(pNodo.Dato);
        }
    }
        static void Main(string[] args)
        {
            CArbol arbol= new CArbol();

            CNodo raiz=arbol.Insertar("a",null);

            arbol.Insertar("b", raiz);
            arbol.Insertar("c", raiz);

            CNodo n= arbol.Insertar("d",raiz);
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