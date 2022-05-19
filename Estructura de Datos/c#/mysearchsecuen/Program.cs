// See https://aka.ms/new-console-template for more information
class Program
	{
		 static void Main(string[] args)
		{
			int numero, i=0, pos =0;
			int [] vec ={3,65,8,1,2,88,9,0,6,2};
			bool encontro = false;
			
			Console.Write("Favor de ingresar un numero: ");
			numero= int.Parse(Console.ReadLine());
			
			
			while (!(encontro)&& i <10){
				
				if(numero == vec[i]){
					encontro = true;
					pos=i;
				}
				i=i+1;
			}
			if (encontro){
				Console.WriteLine("El dato se encuentra y esta en la pocicion "+pos);
                Console.ReadLine();
            }else{
                Console.WriteLine("El dato no se encontro");
			    Console.ReadLine();
            }
            
		}
    }