namespace examen_4
{
    class program
    {
        class cine
        {
            int[] sala = new int[5];
            int[] pelicula = new int[9];

            public void ingresar()
            {

                for (int i = 1; i < sala.Length; i++)
                {
                    Console.WriteLine("Ingresa los datos de la sala: " + i);
                    try
                    {
                        sala[i] = Convert.ToInt32(Console.ReadLine());
                    }
                    catch
                    {
                        Console.WriteLine("Intente de nuevo");
                    }
                }
                quicksort(sala, 1, 5 - 1);

                for (int x = 1; x < pelicula.Length; x++)
                {
                    Console.WriteLine("Ingresa la pelicula" + x);
                    try
                    {
                        pelicula[x] = Convert.ToInt32(Console.ReadLine());
                    }
                    catch
                    {
                        Console.WriteLine("Intente de nuevo");
                    }
                }
                quicksort(pelicula, 0, 9 - 1);
                mostrar();

            }
//metodo de ordenamiento
            public void quicksort(int[] vector, int primero, int ultimo)
            {
                int i, j, central;
                double pivote;
                central = (primero + ultimo) / 2;
                pivote = vector[central];
                i = primero;
                j = ultimo;
                do
                {
                    while (vector[i] < pivote) i++;
                    while (vector[j] > pivote) j--;
                    if (i <= j)

                    {
                        int temp;
                        temp = vector[i];
                        vector[i] = vector[j];
                        vector[j] = temp;
                        i++;
                        j--;
                    }

                } while (i <= j);
                if (primero < j)
                {
                    quicksort(vector, primero, j);
                }
                if (i < ultimo)
                {
                    quicksort(vector, i, ultimo);
                }

            }
            public void mostrar()
            {
                int mayor = pelicula
                [0],  pos = 0,  imayor = pelicula[0];
                int mayor2 = sala[0] ,pos2 = 0 ,imayor2 = sala[0];
                for (int x = 1; x < sala.Length; x++)
                {
                    Console.WriteLine("Los que ingresaron a la sala con el numero: " + x + " son: " + sala[x]);
                }

                for (int i = 1; i < pelicula.Length; i++)
                {
                    Console.WriteLine("La pelicula " + i + " es: " + pelicula[i]);
                }
                for (int f = 1; f < pelicula.Length; f++)
                {
                    if (pelicula[f] > mayor)
                    {
                        mayor = pelicula[f];
                        imayor = pelicula[f];
                        pos = f;

                    }
                }
                for (int a = 1; a < sala.Length; a++)
                {
                    if (sala[a] > mayor)
                    {
                        mayor2 = sala[a];
                        imayor2 = sala[a];
                        pos2 = a;

                    }
                }
                Console.WriteLine("La pelicula mas vista es: " + pos + " La cantidad de personas es: " + mayor);
                Console.WriteLine("La combinacion es: " + pos2 + " " + mayor2 + " Y pelicula: " + pos);
            }
        }
 static void Main(string[] args)
        {
            cine cinema;
            cinema = new cine();
            int opc = 0;
            do
            {
                Console.WriteLine("\t-----Menu------");
                Console.WriteLine("1. Ingresar");
                Console.WriteLine("2. Mostrar");
                Console.WriteLine("4. Salir");
                Console.WriteLine("Ingresa la opcion: ");
                try
                {
                    opc = Convert.ToInt32(Console.ReadLine());
                }
                catch
                {
                    Console.WriteLine("Intente de nuevo");
                }

                switch (opc)
                {
                    case 1:
                        cinema.ingresar();
                        break;
                    case 2:
                        cinema.mostrar();
                        break;
                }
                Console.ReadKey();
                Console.Clear();
            } while (opc != 4);
        }
    }
}



