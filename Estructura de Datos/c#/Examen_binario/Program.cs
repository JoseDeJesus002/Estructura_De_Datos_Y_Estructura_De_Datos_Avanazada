
namespace Examen_binario
{
    class program
    {
        public class alumnos
        {
            int numero, puntero = 0, final = 50, mitad = -999;
            int[] calif = { 7, 2, 7, 2, 3, 1, 7, 5, 6, 3, 4, 7, 8, 2, 1, 4, 6, 9, 8, 6, 5, 5, 6, 5, 4, 8, 9, 9, 5, 6 };
            int[] num_Alum = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26, 27, 28, 29, 30 };
            bool encontrado = false;
            public void buscar()
            {
                ordenar();
                Console.WriteLine("Favor de el numero del alumno: ");
                numero = int.Parse(Console.ReadLine());

                while (!encontrado && puntero <= final)
                {
                    mitad = (int)((puntero + final) / 2);

                    if (numero == num_Alum[mitad])
                        encontrado = true;

                    else if (numero < num_Alum[mitad])
                        final = mitad - 1;
                    else
                        puntero = mitad + 1;
                }
                if (encontrado)
                {
                    Console.WriteLine("El numero de alumno es: " + (mitad + 1));
                    Console.WriteLine("la calificaion del alumno es: " + calif[numero - 1]);
                }
                else
                {
                    Console.WriteLine("El alumno no se encuentra intentelo de nuevo");
                    Console.ReadKey();
                }
            }
            public void califAlta()
            {
                Console.Write("\n\nLa calificacion mas alta es: " + calif.Max());
                Console.ReadKey();
            }
            public void ordenar()
            {
                int t;
                for (int a = 1; a < calif.Length; a++)
                    for (int b = calif.Length - 1; b >= a; b--)
                    {
                        if (calif[b - 1] > calif[b])
                        {
                            t = calif[b - 1];
                            calif[b - 1] = calif[b];
                            calif[b] = t;
                        }
                    }
            }

            public void mostrar()
            {
                ordenar();
                for (int i = 0; i < num_Alum.Length; i++)
                {
                    Console.WriteLine("El numero de alumno es:" + num_Alum[i] + " La calificacion es: " + calif[i]);

                }
            }
        }
        class orden
        {

            public void menu_()
            {
                int opc;
                alumnos alum;
                alum = new alumnos();
                do
                {
                    Console.WriteLine("\t-------Alumnos-----");
                    Console.WriteLine("1. Buscar");
                    Console.WriteLine("2. mostrar");
                    Console.WriteLine("3. Calificacion Maxima");
                    Console.WriteLine("4. Salir");
                    Console.WriteLine("Ingresa la opcion a realizar: ");
                    opc = Convert.ToInt32(Console.ReadLine());
                    switch (opc)
                    {
                        case 1:
                            alum.buscar();
                            break;
                        case 2:
                            alum.califAlta();
                            break;
                        case 3:
                            alum.mostrar();
                            break;
                        default:
                            Console.WriteLine("Opcion incorrecta intente de nuevo");
                            break;

                    }
                    Console.ReadKey();//para detener y poder ver los datos
                    Console.Clear();//para borrar datos de la consola 
                } while (opc != 4);
            }
        }
        static void Main(string[] args)
        {
            orden men;
            men = new orden();
            men.menu_();

        }
    }
}
