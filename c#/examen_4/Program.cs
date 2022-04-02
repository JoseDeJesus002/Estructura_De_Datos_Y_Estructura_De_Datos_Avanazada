
namespace examen_4
{
    class program
    {
        class cine
        {
            int[] sala = new int[2];
            int[] sala2 = new int[2];
            int[] sala3 = new int[2];
            int[] sala4 = new int[2];
            int[] pelicula = new int[9];
            int[] pelicula2 = new int[9];
            int[] pelicula3 = new int[9];
            int[] pelicula4 = new int[9];
            public void ingresar()
            {
                int opc;
                Console.WriteLine("\t-----Menu Ingreso Salas-----");
                Console.WriteLine("1. Sala 1");
                Console.WriteLine("2. Sala 2");
                Console.WriteLine("3. Sala 3");
                Console.WriteLine("4. Sala 4");
                Console.WriteLine("5. Salir");
                Console.WriteLine("Ingresa la opcion a realizar: ");
                opc = Convert.ToInt32(Console.ReadLine());
                switch (opc)
                {
                    case 1:
                        for (int i = 1; i < sala.Length; i++)
                        {
                            Console.WriteLine("Ingresa los datos de la sala 1 pelicula: " + i);
                            try
                            {
                                sala[i] = Convert.ToInt32(Console.ReadLine());
                            }
                            catch
                            {
                                Console.WriteLine("Intente de nuevo");
                            }
                            for (int a = 1; a < pelicula.Length; a++)
                            {
                                Console.WriteLine("Pelicula " + a + " son: ");
                                try
                                {
                                    pelicula[a] = Convert.ToInt32(Console.ReadLine());
                                }
                                catch
                                {
                                    Console.WriteLine("Intente de nuevo");
                                }
                            }

                        }
                        break;
                    case 2:
                        for (int i = 1; i < sala2.Length; i++)
                        {
                            try
                            {
                                Console.WriteLine("Ingresa los datos de la sala 2 pelicula: " + i);
                                sala2[i] = Convert.ToInt32(Console.ReadLine());
                            }
                            catch
                            {
                                Console.WriteLine("Intente de nuevo");
                            }
                            for (int a = 1; a < pelicula2.Length; a++)
                            {
                                Console.WriteLine("Pelicula " + a + " son: ");
                                try
                                {
                                    pelicula2[a] = Convert.ToInt32(Console.ReadLine());
                                }
                                catch
                                {
                                    Console.WriteLine("Intente de nuevo");
                                }
                            }
                        }
                        break;
                    case 3:
                        for (int i = 1; i < sala3.Length; i++)
                        {
                            Console.WriteLine("Ingresa los datos de la sala 3 pelicula: " + i);
                            try
                            {
                                sala3[i] = Convert.ToInt32(Console.ReadLine());
                            }
                            catch
                            {
                                Console.WriteLine("Intente de nuevo");
                            }
                            for (int a = 1; a < pelicula3.Length; a++)
                            {
                                Console.WriteLine("Pelicula " + a + " son: ");
                                try
                                {
                                    pelicula3[a] = Convert.ToInt32(Console.ReadLine());
                                }
                                catch
                                {
                                    Console.WriteLine("Intente de nuevo");
                                }
                            }
                        }
                        break;
                    case 4:
                        for (int i = 1; i < sala4.Length; i++)
                        {
                            Console.WriteLine("Ingresa los datos de la sala 4 pelicula: " + i);
                            try
                            {
                                sala4[i] = Convert.ToInt32(Console.ReadLine());
                            }
                            catch
                            {
                                Console.WriteLine("Intente de nuevo");
                            }
                            for (int a = 1; a < pelicula4.Length; a++)
                            {
                                Console.WriteLine("Pelicula " + a + " son: ");
                                try
                                {
                                    pelicula4[a] = Convert.ToInt32(Console.ReadLine());
                                }
                                catch
                                {
                                    Console.WriteLine("Intente de nuevo");
                                }
                            }
                        }
                        break;
                }

            }
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
                int opc;
                int mayor = pelicula[0], pos = 0, imayor = pelicula[0];
                int mayor2 = sala[0], pos2 = 0, imayor2 = sala[0];
                Console.WriteLine("\t-----Menu Salas-----");
                Console.WriteLine("1. Sala 1");
                Console.WriteLine("2. Sala 2");
                Console.WriteLine("3. Sala 3");
                Console.WriteLine("4. Sala 4");
                Console.WriteLine("5. Mejor combinacion sala pelicula");
                Console.WriteLine("Ingresa la opcion a realizar: ");
                opc = Convert.ToInt32(Console.ReadLine());
                switch (opc)
                {
                    case 1:
                        quicksort(pelicula, 1, 9 - 1);
                        for (int x = 1; x < sala.Length; x++)
                        {
                            Console.WriteLine("Los que ingresaron a la sala 1  son: " + sala[x]);
                            for (int y = 1; y < pelicula.Length; y++)
                            {
                                Console.WriteLine("La pelicula " + y + " es:" + pelicula[y]);
                            }
                        }
                        break;
                    case 2:
                        for (int x = 1; x < sala2.Length; x++)
                        {
                            Console.WriteLine("Los que ingresaron a la sala 2 con el numero: " + x + " son: " + sala2[x]);
                            for (int y = 1; y < pelicula2.Length; y++)
                            {
                                Console.WriteLine("La pelicula " + y + " es:" + pelicula2[y]);
                            }
                        }
                        break;
                    case 3:
                        for (int x = 1; x < sala.Length; x++)
                        {
                            sala3 = sala3.Concat(sala4).ToArray();
                            Console.WriteLine("Los que ingresaron a la sala 3 con el numero: " + x + " son: " + sala3[x]);
                            for (int y = 1; y < pelicula3.Length; y++)
                            {
                                Console.WriteLine("La pelicula " + y + " es:" + pelicula3[y]);
                            }
                        }
                        break;
                    case 4:
                        for (int x = 1; x < sala.Length; x++)
                        {
                            Console.WriteLine("Los que ingresaron a la sala 4 con el numero: " + x + " son: " + sala4[x]);
                            for (int y = 1; y < pelicula4.Length; y++)
                            {
                                Console.WriteLine("La pelicula " + y + " es:" + pelicula4[y]);
                            }
                        }
                        break;
                    case 5:
                        for (int a = 1; a < sala.Length; a++)
                        {
                            if (sala[a] > mayor2)
                            {
                                mayor2 = sala[a];
                                imayor2 = sala[a];
                                pos2 = a;
                            }
                        }
                        Console.WriteLine("La combinacion es: " + "Sala " + pos2 + " Pelicula " + mayor2);
                        break;
                    case 6:
                        for (int f = 1; f < pelicula.Length; f++)
                        {
                            if (pelicula[f] + pelicula2[f] > mayor)
                            {
                                mayor = pelicula[f];
                                imayor = pelicula[f];
                                pos = f;

                            }
                        }
                        Console.WriteLine("La pelicula mas vista es: " + pos + " La cantidad de personas es: " + mayor);

                        break;
                }
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
